/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:32:11 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/10 17:57:16 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The memchr() function scans the initial n bytes of the memory
area pointed to by s for the first instance of c.  Both c and the
bytes of the memory area pointed to by s are interpreted as
unsigned char.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	int		t;
	char	*temp;

	i = 0;
	t = n;
	temp = (char *)s;
	while (i <= t)
	{
		if (temp[i] == c)
		{
			return ((char *)&temp[i]);
		}
		i++;
	}
	return (0);
}
