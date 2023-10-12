/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:58:57 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/12 01:14:26 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The memcmp() function compares the first n bytes (each
interpreted as unsigned char) of the memory areas s1 and s2.
*/

// int	ft_strncmp(char *s1, char *s2, int n)
// {
// 	int				i;

// 	i = 0;
// 	while (s1[i] != '\0' && s2[i] == s1[i] && n > 0)
// 	{
// 		i++;
// 		n--;
// 	}
// 	if (n == 0)
// 	{
// 		return (0);
// 	}
// 	if (n < 0)
// 	{
// 		return (-1);
// 	}
// 	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// }

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	return (ft_strncmp( (char *)s1, (char *)s2, n));
// }
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((temp1[i] != temp2[i]))
			return (temp1[i] - temp2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char *s1;
// 	char *s2;

// 	s1 = "1234";
// 	s2 = "1235";
// 	printf("%d\n", memcmp(s1, s2, -2));
// 	printf("%d\n", ft_memcmp(s1, s2, -2));
// 	return (0);
// }