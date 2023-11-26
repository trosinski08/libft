/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:35:24 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/11 09:01:55 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strdup() function returns a pointer to a new string which is
a duplicate of the string s.  Memory for the new string is
obtained with malloc(3), and can be freed with free(3).
RETURN VALUE On success, the strdup() function returns a pointer to the
duplicated string.  It returns NULL if insufficient memory was
available, with errno set to indicate the error.
*/

char	*ft_strdup(const char *s)
{
	int		i;
	char	*sdup;

	i = 0;
	sdup = (char *)malloc(ft_strlen(s)+1);
	if (sdup == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		sdup[i] = s[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}
