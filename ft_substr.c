/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:30:21 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/11 12:17:30 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char				*subs;

	i = 0;
	subs = (char *)malloc(len);
	if (!subs)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (i == start && start <= len)
		{
			subs[i] = s[i];
			i++;
			start++;
		}
		i++;
	}
	return (subs);
}
