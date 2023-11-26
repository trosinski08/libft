/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:36:22 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/15 02:40:40 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function ’f’ to each character of the string ’s’, and passing 
its index as first argument to create a new string (with malloc(3)) 
resulting from successive applications of ’f’.
*/

char	*ft_strmapi(char const *str, char (*func)(unsigned int, char))
{
	unsigned int	i;
	char			*mapstr;

	i = 0;
	mapstr = (char *)malloc (sizeof (char) * (ft_strlen(str)) + 1);
	if (!mapstr)
		return ((void *)0);
	while (str[i] != '\0')
	{
		mapstr[i] = func(i, str[i]);
		i++;
	}
	mapstr[i] = '\0';
	return (mapstr);
}
