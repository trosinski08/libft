/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:14:17 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/11 13:58:28 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns an array of strings obtained by splitting
’s’ using the character ’c’ as a delimiter.
The array must end with a NULL pointer.
RETURN
The array of new strings resulting from the split. NULL if the allocation fails
*/

#include "libft.h"

int	delcounter(char const *str, char delimiter)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == delimiter)
		{
			counter++;
		}
		i++;
	}
	return (counter);
}

char	**ft_split(char const *str, char delimiter)
{

}
