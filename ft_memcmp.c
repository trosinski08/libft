/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:58:57 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/10 18:27:54 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The memcmp() function compares the first n bytes (each
interpreted as unsigned char) of the memory areas s1 and s2.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		size;
	int		i;
	int		result;
	char	*temp1;
	char	*temp2;

	size = n;
	i = 0;
	temp1 = (char *)s1;
	temp2 = (char *)s2;
	if (n == 0)
		result = 0;
	while (i <= size)
	{
		if (temp1[i] == temp2[i])
			i++;
		if ((temp1[i] > temp2[i]) || (temp1[i] < temp2[i]))
			result = (temp1[i] - temp2[i]);
		else if (temp1[size] == temp2[size])
			result = 0;
	}
	return (result);
}
