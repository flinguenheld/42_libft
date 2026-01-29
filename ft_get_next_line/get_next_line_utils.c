/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 21:51:27 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/29 14:31:34 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * @brief
 * Saved the address of ptr at the end of remainder
 * Slot has to be 0 or 1
 * ptr can't be NULL
 */
void	save_ptr(char *remainder, char *ptr, size_t slot)
{
	ft_memcpy(remainder + GNL_BUFFER_SIZE + (slot * sizeof(intptr_t)),
		(char *)(intptr_t) & ptr,
		sizeof(intptr_t));
}

/**
 * @brief
 * Read the saved address at the end of remainder
 * Slot has to be 0 or 1
 * @return
 * A char pointer set at the saved address
 */
char	*get_ptr(char *remainder, size_t slot)
{
	intptr_t	read_address;

	ft_memcpy(&read_address,
		(remainder + GNL_BUFFER_SIZE + (slot * sizeof(intptr_t))),
		sizeof(intptr_t));
	return ((char *)read_address);
}

// ----------------------------------------------------------------------------
/**
 * @brief
 * Look for file descriptor in the remainder array.
 * Then return the associated remainder.
 * If not found, set the first available slot and return its remainder.
 * Since remainders is initialised to 0,
 * the fd 0 is saved in -42 (impossible fd)
 * @return
 * The pointer of the file descriptor's remainder.
 * NULL if fd is not found and there's no more availiable slot.
 */
char	*get_remainder(t_remainder *remainders, int fd)
{
	size_t	index;

	if (fd == 0)
		fd = -42;
	index = 0;
	while (index < GNL_NB_FILE_MAX)
	{
		if (remainders[index].fd == fd)
			return (remainders[index].rem);
		index++;
	}
	index = 0;
	while (index < GNL_NB_FILE_MAX)
	{
		if (remainders[index].fd == 0)
		{
			remainders[index].fd = fd;
			return (remainders[index].rem);
		}
		index++;
	}
	return (NULL);
}
