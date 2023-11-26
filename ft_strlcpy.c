/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:22:57 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/23 00:01:59 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Copy/catenate a string with truncation.
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
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
