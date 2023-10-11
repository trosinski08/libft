/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:32:07 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/11 12:17:53 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
specified in ’set’ removed from the beginning and the end of the string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*trims;

	i = 0;
	j = 0;
	k = 0;
	trims = (char *)malloc(ft_strlen(s1));
	if (!trims)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j++;
		}
		trims[k] = s1[i];
		k++;
		i++;
	}
	return (trims);
}
