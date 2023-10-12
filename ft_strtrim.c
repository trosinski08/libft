/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:32:07 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/12 23:05:02 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
specified in ’set’ removed from the beginning and the end of the string.
*/

// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t		i;
// 	int			len;

// 	len = 0;
// 	while (src[len])
// 		len++;
// 	if (size == 0)
// 		return (len);
// 	i = 0;
// 	while (i < size - 1 && src[i])
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (len);
// }

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == (char)c)
// 			return ((char *)&s[i]);
// 		i++;
// 	}
// 	if ((char)c == '\0' && s[i] == '\0')
// 		return ((char *)&s[i]);
// 	return (NULL);
// }

static size_t	ft_lenstr(const char *str)
{
	size_t	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int		i;
	int		j;
	char	*trims;

	trims = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_lenstr(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		{
			j--;
		}
		if (s1[0] == '\0')
			trims = (char *) malloc (sizeof (char) * (j - i));
		else
			trims = (char *) malloc (sizeof (char) * (j - i + 1));
		if (trims)
			ft_strlcpy(trims, &s1[i], j - i + 1);
		else
			return (NULL);
	}
	return (trims);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char const	*s1;
// 	char const	*set;

// 	s1 = "";
// 	set = "";
// 	printf("%s\n", ft_strtrim(s1, set));
// 	printf("%lu\n", (sizeof(ft_strtrim(s1, set))));
// 	return (0);
// }
