/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:14:17 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/12 18:12:46 by trosinsk         ###   ########.fr       */
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

// zlicza ilosc wystapien delimitera
static	size_t	ft_delcounter(char const *str, char delimiter)
{
	size_t	counter;
	size_t	i;

	counter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != delimiter)
		{
			counter++;
			while (str[i] && str[i] != delimiter)
			{
				i++;
			}
		}
		else if (str[i] == delimiter)
		{
			i++;
		}
	}
	return (counter);
}

//obliczanie dlugosci ciagu znakow
static	size_t	str_len(char const *str, char delimiter)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != delimiter)
	{
		i++;
	}
	return (i);
}

//zwalnia pamiec dla poszczegolnych substr, a po zakonczeniu iteracji cala
static	void	mem_free(size_t i, char **str_array)
{
	while (i > 0)
	{
		i--;
		free(str_array[i]);
	}
	free(str_array);
}

//line to long del=delimiter, dc=delcounter
static	char	**helper(char const *str, char del, char **str_array, size_t dc)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < dc)
	{
		while (str[j] && str[j] == del)
		{
			j++;
		}
		str_array[i] = ft_substr(str, j, str_len(&str[j], del));
		if (!str_array[i])
		{
			mem_free(i, str_array);
			return (NULL);
		}
		while (str[j] && str[j] != del)
		{
			j++;
		}
		i++;
	}
	str_array[i] = NULL;
	return (str_array);
}

char	**ft_split(char const *str, char delimiter)
{
	char	**str_array;
	size_t	delcounter;

	if (!str)
	{
		return (NULL);
	}
	delcounter = ft_delcounter(str, delimiter);
	str_array = (char **)malloc(sizeof(char *) * (delcounter + 1));
	if (!str_array)
	{
		return (NULL);
	}
	str_array = helper(str, delimiter, str_array, delcounter);
	return (str_array);
}
