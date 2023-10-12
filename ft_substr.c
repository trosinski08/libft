/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:30:21 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/12 22:41:30 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static size_t	len_checker(char const *s, unsigned int start, size_t len)
{
	size_t	mem_size;

	if ((start > ft_lenstr(s) || (start == 0 && s[0] == '\0')))
		mem_size = 0;
	else if (len < (ft_lenstr(s) - start))
		mem_size = len;
	else
		mem_size = (ft_lenstr(s) - start);
	return (mem_size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	size_t			mem_size;
	char			*subs;

	mem_size = len_checker(s, start, len);
	subs = (char *)malloc(sizeof (char) * (mem_size + 1));
	if (subs == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			subs[j] = s[i];
			j++;
		}
		i++;
	}
	subs[j] = '\0';
	return (subs);
}
