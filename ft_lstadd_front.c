/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:13:07 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/13 17:19:34 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*pushedlist;

	pushedlist = ft_lstnew(new -> content);
	if (pushedlist == NULL)
		return ;
	pushedlist -> next = *lst;
	*lst = pushedlist;
}
