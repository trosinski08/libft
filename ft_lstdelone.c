/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:10:43 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/13 18:36:10 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
To remove a specific item from the list, either by its index from the beginning 
of the list or by its value, we will need to go over all the items, continuously 
looking ahead to find out if we've reached the node before the item we wish to 
remove. This is because we need to change the location to where the previous 
node points to as well
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
	{
		return ;
	}
	if (lst)
	{
		(*del)(lst->content);
	}
	free(lst);
}
