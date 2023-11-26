/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:29:25 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/18 17:29:31 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, int n)
{
	int				i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	i = 0;
	while (temp1[i] != '\0' && temp2[i] == temp1[i] && n > 0)
	{
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-2);
	}
	return (temp1[i] - temp2[i]);
}
