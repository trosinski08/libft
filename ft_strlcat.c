/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:53:43 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/10 16:07:40 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len_dest;

	len_dest = ft_strlen(dest);
	if (!dest || !src)
	{
		return (len_dest + ft_strlen(src));
	}
	if (size == 0)
		return (ft_strlen(src));
	if ((int)size < 0)
		size = len_dest + ft_strlen(src) + 1;
	i = 0;
	while (len_dest + i < size - 1 && src[i])
	{
		dest[len_dest + 1] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	if ((int)size > len_dest)
		size = len_dest;
	return (size + ft_strlen(src));
}

// int	main(void)
// {
// 	char	dest[20];
// 	char	src[];
// 	size_t	result;

// 	dest = "Hello, ";
// 	src = "world!";
// 	result = strlcat(dest, src, 30);

// 	printf("Total length: %d\n", ft_strlcat(dest, src, 30));
// 	printf("Total length: %zu\n", result);

// 	return (0);
// }