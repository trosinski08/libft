/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:11:57 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/13 16:47:04 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*templ;

	size = 0;
	if (lst == NULL)
		return (size);
	templ = lst;
	while (templ != NULL)
	{
		templ = templ -> next;
		size ++;
	}
	return (size);
}
