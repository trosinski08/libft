/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:41:06 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/10 15:41:54 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION        
The memcpy() function copies n bytes from memory area src to
memory area dest.  The memory areas must not overlap.  Use
memmove(3) if the memory areas do overlap.
RETURN VALUE
The memcpy() function returns a pointer to dest.
*/

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	if (!dest || !src)
		return (0);
	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dest);
}
