/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:47:26 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/11 22:10:13 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strchr() function returns a pointer to the first occurrence
of the character c in the string s.
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// char *ft_strchr(const char *s, int c)
// {
//     while (*s)
//     {
//         if (*s == c)
//             return ((char *)s);
//         s++;
//     }

//     if (c == '\0')  // Obsługa przypadku, gdy c to znak null ('\0')
//         return ((char *)s);

//     return NULL;  // Zwróć NULL, jeśli c nie zostało znalezione
// }

// #include <stdio.h>
// int	main(void)
// {
// 	int			c;
// 	const char	*s;

// 	s = "teste";
// 	c = 'e';
// 	printf("znaleziono %p\n", strchr(s, c));
// 	printf("znaleziono %p\n", ft_strchr(s, c));
// }