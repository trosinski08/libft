/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:36:22 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/12 02:29:57 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
