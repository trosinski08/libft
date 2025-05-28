/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:57:42 by trosinsk          #+#    #+#             */
/*   Updated: 2024/07/01 by Copilot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a new string,
which is the result of the concatenation of ’s1’ and ’s2’.
*/

#include "../include/libft.h" // For ft_strlen, malloc, NULL
// #include <stdlib.h> // For malloc, NULL if not in libft.h (usually is)

/**
 * Concatenates two strings and returns a new string.
 *
 * @param s1 The first string to be concatenated. Can be NULL.
 * @param s2 The second string to be concatenated. Can be NULL.
 * @return The concatenated string, or NULL if memory allocation fails.
 *         If s1 and s2 are both NULL or effectively empty, returns an empty string.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	s1_len = 0;
	if (s1)
		s1_len = ft_strlen(s1);
	s2_len = 0;
	if (s2)
		s2_len = ft_strlen(s2);
	d = (char *)malloc(s1_len + s2_len + 1);
	if (!d)
	{
		return (NULL); // Corrected: return NULL on malloc failure
	}
	i = 0;
	if (s1) // Copy s1 if it exists
	{
		while (i < s1_len)
		{
			d[i] = s1[i];
			i++;
		}
	}
	j = 0;
	if (s2) // Copy s2 if it exists
	{
		while (j < s2_len)
		{
			d[i + j] = s2[j];
			j++;
		}
	}
	d[i + j] = '\0'; // Null-terminate
	return (d);
}
