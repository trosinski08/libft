/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 06:58:40 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/14 02:26:16 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The calloc(), function allocate memory. The allocated memory is aligned 
such that it can be used for any data type, including AltiVec- and 
SSE-related types. The malloc() function allocates size bytes of memory 
and returns a pointer to the allocated memory.
The calloc() function contiguously allocates enough space for count objects that 
are size bytes of memory each and returns a pointer to
the allocated memory.  The allocated memory is filled with bytes of value zero.
*/

void	*ft_calloc(size_t counter, size_t sizer)
{
	int		memcap;
	char	*m;

	if (counter > 2147483647 || sizer > 2147483647)
		return (NULL);
	memcap = counter * sizer;
	m = (char *)malloc(memcap);
	if (!m)
	{
		return ((void *)0);
	}
	else
	{
		ft_bzero(m, memcap);
	}
	return (m);
}
