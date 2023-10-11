/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:57:42 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/11 12:12:01 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a new string, 
which is the result of the concatenation of ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*d;

	i = 0;
	j = 0;
	d = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!d)
	{
		return ((void *) '\0');
	}
	while (s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		d[i] = s2[j];
		i++;
		j++;
	}
	d[i] = '\0';
	return (d);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "42";
// 	s2 = "Heilbronn";
// 	printf("%s", ft_strjoin(s1, s2));
// 	return (0);
// }
