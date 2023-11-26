/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 05:25:32 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/15 03:16:25 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *num)
{
	int	i;
	int	sign;
	int	conv_value;

	i = 0;
	sign = 1;
	conv_value = 0;
	while ((num[i] >= 9 && num[i] <= 13) || num[i] == 32)
		i++;
	if (num[i] == '\0')
	{
		return (0);
	}
	if (num[i] == '-' || num[i] == '+')
	{
		if (num[i] == '-')
			sign = -sign;
		i++;
	}
	while (num[i] >= '0' && num[i] <= '9')
	{
		conv_value = (num[i] - '0') + (conv_value * 10);
		i++;
	}
	return (conv_value * sign);
}
