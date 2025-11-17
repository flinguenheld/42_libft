/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:47:35 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/17 16:15:04 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The  memchr()  function  scans the initial n bytes of the memory area pointed
to by s for the first instance of c.
Both c and the bytes of the memory area pointed to by s are interpreted as
unsigned char.

RETURN VALUE
The  memchr() and  memrchr() functions return a pointer to the matching byte
or NULL if the character does not occur in the given memory area.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}
