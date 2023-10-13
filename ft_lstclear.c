/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:10:15 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/13 18:49:06 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*templ;

	if (*lst == NULL || del == NULL || lst == NULL)
	{
		return ;
	}
	while (lst != NULL && *lst != NULL)
	{
		templ = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = templ;
	}
}
