/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 06:47:36 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/11 17:55:13 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	signcounter(int num)
{
	int	len;

	len = 0;
	if (num == 0)
	{
		len = 1;
	}
	if (num < 0)
	{
		num = -num;
		len += 1;
	}
	while (num / 10 > 0)
	{
		len++;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	int		len;
	char	*str;

	len = signcounter(num);
	str = (char *) malloc (len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	if (num == 0)
	{
		str[0] = '0';
	}
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}
