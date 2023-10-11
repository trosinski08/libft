/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:45:24 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/10 16:17:26 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
DESCRIPTION         top
       The memset() function fills the first n bytes of the memory area
       pointed to by s with the constant byte c.
RETURN VALUE         top
       The memset() function returns a pointer to the memory area s.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*temp;
	int		t;

	i = 0;
	temp = (char *)s;
	t = n;
	while (i < t)
	{
		temp[i] = c;
		i++;
	}
	return (s);
}
