/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:29:53 by trosinsk          #+#    #+#             */
/*   Updated: 2024/06/09 17:36:49 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/**
 * Writes a character to the specified file descriptor.
 *
 * @param c The character to write.
 * @param fd The file descriptor to write to.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
