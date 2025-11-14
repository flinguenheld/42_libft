/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:33:19 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/14 18:01:18 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The  memcpy() function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap. Use memmove if the memory areas do overlap.
RETURN VALUE
The memcpy() function returns a pointer to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*copied_dest;

	if (dest == NULL && src == NULL)
		return (NULL);
	copied_dest = (unsigned char *)dest;
	while (n--)
		*copied_dest++ = *(unsigned char *)src++;
	return (dest);
}
