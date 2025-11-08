/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:58:24 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/08 19:38:02 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	full_size;

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
