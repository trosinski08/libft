/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:30:21 by trosinsk          #+#    #+#             */
/*   Updated: 2023/11/16 02:38:10 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

//condition for allocate enogh memory for empty str
// static size_t	ft_lenstr(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	if (str[0] == '\0')
// 		return (1);
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// static size_t	len_checker(char const *s, unsigned int start, size_t len)
// {
// 	size_t	mem_size;

// 	if ((start > ft_lenstr(s) || (start == 0 && s[0] == '\0')))
// 		mem_size = 0;
// 	else if (len < (ft_lenstr(s) - start))
// 		mem_size = len;
// 	else
// 		mem_size = (ft_lenstr(s) - start);
// 	return (mem_size);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*subs;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		subs = malloc(sizeof(char) * 1);
		if (!subs)
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	subs = malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	while (start < ft_strlen(s) && i < len && s[start])
	{
		subs[i++] = s[start++];
	}
	subs[i] = '\0';
	return (subs);
}
