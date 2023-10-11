/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:47:26 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/10 16:11:25 by trosinsk         ###   ########.fr       */
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
	if (s[0] == '\0')
	{
		return ((void *)0);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (!c)
		return ((char *)&s[i]);
	return (0);
}

// int	main(void)
// {
// 	int			c;
// 	const char	*s;

// 	s = "Anulka";
// 	c = 'u';
// 	printf("znaleziono %s\n", strchr(s, c));
// 	printf("znaleziono %s", ft_strchr(s, c));
// }