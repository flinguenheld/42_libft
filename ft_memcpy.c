/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:33:19 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/10 14:06:46 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The  memcpy() function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap. Use memmove if the memory areas do overlap.
RETURN VALUE
The memcpy() function returns a pointer to dest.\n
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
