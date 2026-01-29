/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 21:51:27 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/29 14:26:23 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stddef.h>
#include <stdio.h>

/**
 * @brief
 * Read one time the file with the remainder as buffer
 * Then save the ptr addresses at the end of remainder
 *    slot 0 -> ptr of starting values
 *    slot 1 -> ptr of the end
 * @return
 * The read function status
 *   - Nb char read
 *   - -1 if error
 *   -  0 if end of file
 */
static int	fill_remainder(int fd, char *remainder)
{
	int	status;

	status = read(fd, remainder, GNL_BUFFER_SIZE);
	save_ptr(remainder, remainder, 0);
	save_ptr(remainder, remainder + status, 1);
	return (status);
}

/**
 * @brief
 * In the new_line (has to be a valid string):
 *    Copy the old line
 *    Copy the remainder until '\n' included or the entire buffer
 *    Add the string terminator
 * Then update the ptr addresses at the end of the remainder
 *    slot 0 -> ptr of starting values
 *    slot 1 -> ptr of the end
 * @return
 * The length of the new extended line
 */
static size_t	set_line(char *old_l, char **new_l, char *remainder, size_t len)
{
	char	*remainder_from;
	char	*remainder_to;

	remainder_from = get_ptr(remainder, 0);
	remainder_to = get_ptr(remainder, 1);
	ft_memcpy(old_l, *new_l, len);
	while (remainder_from != remainder_to)
	{
		(*new_l)[len++] = *remainder_from++;
		if ((*new_l)[len - 1] == '\n')
			break ;
	}
	(*new_l)[len] = '\0';
	save_ptr(remainder, remainder_from, 0);
	save_ptr(remainder, remainder_to, 1);
	return (len);
}

/**
 * @brief
 * Get the pointers from & to which are saved at the end of the remainder
 *    (At the first loop, they will be NULL, so it doesn't do anything)
 * Get the amount of new chars to add from the remainder (up to a '\n')
 * Malloc the new line
 * Copies values
 * Free the old one
 * @return
 * The length of the new extended line
 */
static size_t	poor_remainder_in_line(char *remainder, char **line, size_t len)
{
	char	*old_line;
	char	*remain_from;
	char	*remain_to;
	char	*remain_get_length;

	old_line = *line;
	remain_from = get_ptr(remainder, 0);
	remain_to = get_ptr(remainder, 1);
	if (remain_from != NULL && remain_to != NULL && remain_from < remain_to)
	{
		remain_get_length = remain_from;
		while (remain_get_length != remain_to)
		{
			if (*remain_get_length++ == '\n')
				break ;
		}
		*line = malloc(len + remain_get_length - remain_from + 1);
		if (*line != NULL)
			len = set_line(old_line, line, remainder, len);
		free(old_line);
	}
	return (len);
}

/**
 * @brief
 * Get the remainder associated to the given file descriptor.
 * Then in an infinite loop:
 *   - Poor remainder inside line (adapte size line with a new malloc)
 *   - If the line ends with a '\n' or it's then end of file, return the line
 *   - Otherwise, read the file one time to fill the remainder
 * Keep the line length to avoid useless loop
 * @return
 * A pointer to the new line (has to be freed by user)
 */
char	*ft_get_next_line(int fd)
{
	size_t				len;
	char				*line;
	int					rd_status;
	char				*remainder;
	static t_remainder	remainders[GNL_NB_FILE_MAX] = {};

	len = 0;
	line = NULL;
	rd_status = 42;
	if (GNL_BUFFER_SIZE >= 1 && fd >= 0)
	{
		remainder = get_remainder(remainders, fd);
		while (remainder != NULL)
		{
			len = poor_remainder_in_line(remainder, &line, len);
			if ((line != NULL && line[len - 1] == '\n') || rd_status == 0)
				return (line);
			rd_status = fill_remainder(fd, remainder);
			if (rd_status < 0)
				return (free(line), NULL);
		}
	}
	return (line);
}
