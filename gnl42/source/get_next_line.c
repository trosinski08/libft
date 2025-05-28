/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trosinsk <trosinsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:37:39 by trosinsk          #+#    #+#             */
/*   Updated: 2024/09/29 17:33:51 by trosinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line.h"

char	*l_c(char *str)
{
	char	*rest_line;
	char	*nl_char_ptr;
	size_t	nl_pos;
	size_t	remaining_len;

	if (!str)
		return (NULL);
	nl_char_ptr = ft_strchr(str, '\n');
	if (!nl_char_ptr)
	{
		free(str);
		return (NULL);
	}
	nl_pos = nl_char_ptr - str;
	remaining_len = ft_strlen(str) - (nl_pos + 1);
	
	if (remaining_len == 0)
	{
		free(str);
		return (NULL);
	}
	
	rest_line = ft_substr(str, nl_pos + 1, remaining_len);
	if (!rest_line)
	{
		free(str);
		return (NULL);
	}
	
	free(str);
	return (rest_line);
}

char	*line_maker(char *str)
{
	char	*new_line;
	char	*nl_char_ptr;
	size_t	nl_pos;

	if (!str)
		return (NULL);
	nl_char_ptr = ft_strchr(str, '\n');
	if (!nl_char_ptr)
		return (NULL);
	nl_pos = nl_char_ptr - str;
	new_line = ft_substr(str, 0, nl_pos + 1);
	return (new_line);
}

char	*get_next_line(int fd)
{
	static char	*str[OPEN_MAX];
	char		*line;
	char		buff[BUFFER_SIZE + 1];
	int			r;

	line = NULL;
	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
	{
		if (fd >= 0 && fd < OPEN_MAX && str[fd])
		{
			free(str[fd]);
			str[fd] = NULL;
		}
		return (NULL);
	}
	if (read(fd, 0, 0) == -1)
	{
		if (str[fd])
		{
			free(str[fd]);
			str[fd] = NULL;
		}
		return (NULL);
	}
	r = 1;
	while (r > 0)
	{
		r = read(fd, buff, BUFFER_SIZE);
		if (r == -1)
		{
			if (str[fd])
			{
				free(str[fd]);
				str[fd] = NULL;
			}
			return (NULL);
		}
		if (r == 0 && str[fd] == NULL)
			return (NULL);
		buff[r] = '\0';
		str[fd] = ft_strjoin(str[fd], buff);
		if (!str[fd])
			return (NULL);
		if (ft_strchr(str[fd], '\n'))
		{
			line = line_maker(str[fd]);
			if (!line)
			{
				if (str[fd])
				{
					free(str[fd]);
					str[fd] = NULL;
				}
				return (NULL);
			}
			str[fd] = l_c(str[fd]);
			return (line);
		}
	}
	if (str[fd] && *str[fd] != '\0')
	{
		line = ft_strdup(str[fd]);
		if (!line)
		{
			if (str[fd])
			{
				free(str[fd]);
				str[fd] = NULL;
			}
			return (NULL);
		}
		free(str[fd]);
		str[fd] = NULL;
		return (line);
	}
	if (str[fd])
	{
		free(str[fd]);
		str[fd] = NULL;
	}
	return (NULL);
}
