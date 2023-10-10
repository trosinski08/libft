/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 02:50:09 by trosinsk          #+#    #+#             */
/*   Updated: 2023/10/10 15:54:56 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int		ft_strlen(const char *str);
int		ft_atoi(const char *num);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strchr(const char *s, int c);
int		ft_strlcat(char *dest, char *src, unsigned int size);

#endif