/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 06:56:35 by trosinsk          #+#    #+#             */
/*   Updated: 2024/09/29 17:53:16 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*
** ---------------------------------------------------------------------------
** get_next_line - Function for reading from file descriptors line by line
**
** This module provides functions to read content from a file descriptor
** one line at a time, with support for multiple file descriptors.
** The buffer size can be customized at compilation time.
** ---------------------------------------------------------------------------
*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

# include "../../include/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>
# include <stdio.h>

/**
 * @brief Reads a line from a file descriptor
 * 
 * This function reads characters from the given file descriptor
 * until it encounters a newline character, end of file, or an error.
 * It returns a single line as a null-terminated string, including
 * the newline character if it exists.
 * 
 * @param fd The file descriptor to read from
 * @return A newly allocated string containing the line, or NULL if
 *         there's an error or nothing more to read
 */
char	*get_next_line(int fd);

/**
 * @brief Extract the characters after a newline from a string
 * 
 * This function takes a string and returns a new string containing
 * all characters after the first newline character. It's used internally
 * by get_next_line to manage buffer content between calls.
 * 
 * @param str The source string
 * @return A newly allocated string with all characters after the first newline,
 *         or NULL if there's no newline or an error occurs
 */
char	*l_c(char *str);

/**
 * @brief Extract a single line from a string
 * 
 * This function takes a string and returns a new string containing
 * all characters up to and including the first newline character,
 * or the entire string if there's no newline.
 * 
 * @param str The source string
 * @return A newly allocated string containing the line, or NULL if
 *         the string is empty or an error occurs
 */
char	*line_maker(char *str);

#endif
