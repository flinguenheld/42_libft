/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:23:19 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/14 18:01:18 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The memmove() function copies n bytes from memory area src to memory area dest.
The memory areas may overlap: copying takes place as though the bytes in src
are first copied into a temporary array that does not overlap src or dest, and
the bytes are then copied from the temporary array to dest.

RETURN VALUE
The memmove() function returns a pointer to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*copied_dest;

	copied_dest = (unsigned char *)dest;
	if (dest <= src)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			*(copied_dest + n) = *(char *)(src + n);
	return (dest);
}
