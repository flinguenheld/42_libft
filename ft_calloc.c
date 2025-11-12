/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:58:24 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/12 17:40:39 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The  calloc() function allocates memory for an array of nmemb elements of size
bytes each and returns a pointer to the allocated memory.
The memory is set to zero.
If nmemb or size is 0, then calloc() returns  either  NULL, or a unique
pointer value that can later be successfully passed to free().
If the multiplication of nmemb and size would result in integer overflow,
then calloc() returns an error. By contrast, an integer overflow would not
be detected in the following call to malloc(), with the result
that an incorrectly sized block of memory would be allocated:

           malloc(nmemb * size);
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	full_size;

	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = NULL;
	full_size = nmemb * size;
	if (full_size == 0)
		full_size = 1;
	if (full_size == 1 || full_size / nmemb == size)
	{
		ptr = malloc(full_size);
		if (ptr != NULL)
			ft_bzero(ptr, full_size);
	}
	return (ptr);
}
