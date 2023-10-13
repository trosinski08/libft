/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:11:39 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/13 17:33:36 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*counter;

	counter = lst;
	if (counter ->next == NULL)
	{
		return (counter);
	}
	while (counter -> next != NULL)
	{
		counter = counter -> next;
	}
	return (counter);
}
