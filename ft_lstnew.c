/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:12:22 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/13 17:39:39 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc (sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_node -> content = NULL;
	}
	else
	{
		new_node->content = content;
	}
	new_node->next = NULL;
	return (new_node);
}
