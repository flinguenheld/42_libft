/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:58:24 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/17 21:51:45 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The  calloc() function allocates memory for an array of nmemb elements of size
bytes each and returns a pointer to the allocated memory.
The memory is set to zero.

If nmemb or size is 0, calloc() returns a malloc(0) which returns a unique
pointer value that can be successfully passed to free().

If the multiplication of nmemb and size would result in integer overflow,
then calloc() returns a NULL.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	full_size;

	ptr = NULL;
	full_size = nmemb * size;
	if (full_size == 0)
		return (malloc(0));
	if (full_size == 1 || full_size / nmemb == size)
	{
		ptr = malloc(full_size);
		if (ptr != NULL)
			ft_bzero(ptr, full_size);
	}
	return (ptr);
}
