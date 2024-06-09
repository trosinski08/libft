/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:35:40 by trosinsk          #+#    #+#             */
/*   Updated: 2024/06/09 17:59:55 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * Applies the given function to each character of the string,
 * passing its index as the first argument.
 *
 * @param str The string to iterate over.
 * @param func The function to apply to each character.
 */
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
