/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:35:40 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/11 13:11:47 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*func)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		func(i, str + i);
		i++;
	}
}
