/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 02:00:45 by trosinsk          #+#    #+#             */
/*   Updated: 2024/05/25 00:00:00 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h" // Includes nbr_utils.h indirectly if setup

int	print_digit(long nbr, int base)
{
	char	buffer[32];
	int		len;
	int		i;

	if (nbr < 0)
		nbr = -nbr;
	i = 0;
	if (nbr == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (nbr)
		{
			buffer[i++] = "0123456789abcdef"[nbr % base];
			nbr /= base;
		}
	}
	len = i;
	while (--i >= 0)
		write(1, &buffer[i], 1);
	return (len);
}

static int	prec_min(t_format *f, int i)
{
	int	count;

	f->prec = -1;
	count = f->width - f->plus - f->space;
	if (f->plus == 1 && f->minus)
	{
		i += write(1, "+", 1);
		count--;
		f->plus = 0;
	}
	while (i < count)
		i += write(1, " ", 1);
	return (i);
}

static int	min_conv(t_format *f, int i)
{
	f->type = 0;
	while (i < f->width)
		i += write(1, " ", 1);
	return (i);
}

int	non_minus_conv(long nbr, t_format *f, int len, int base)
{
	int		printed_total;
	char	pad_char_for_width;
	int		precision_zeros;
	int		width_padding;
	int		combined_arg;

	printed_total = 0;
	pad_char_for_width = determine_padding_char(f);
	if (f->prec == 0 && nbr == 0 && f->dot == 1)
	{
		printed_total += prec_min(f, 0);
		return (printed_total);
	}
	precision_zeros = get_precision_zeros_len(nbr, f, len);
	width_padding = get_width_padding_len(f, len, precision_zeros);
	combined_arg = (width_padding << 8) | (unsigned char)pad_char_for_width;
	printed_total += apply_width_padding_and_sign(nbr, f, base, combined_arg);
	printed_total += print_hash_flag_prefix(nbr, f);
	printed_total += print_padding_chars(precision_zeros, '0');
	return (printed_total);
}

int	print_digit_prep(long nbr, int base, t_format *f)
{
	int		i;
	int		len;

	i = 0;
	len = ft_digit_len(nbr, base, f);
	i += non_minus_conv(nbr, f, len, base);
	if (f->prec >= 0)
		i += print_digit(nbr, base);
	if (f->minus == 1)
		i = min_conv(f, i);
	return (i);
}
