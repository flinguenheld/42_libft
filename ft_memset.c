/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:08:09 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/17 16:15:04 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The memset() function fills the first n bytes of the memory area pointed
to by s with the constant byte c.

RETURN VALUE
The memset() function returns a pointer to the memory area s.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	while (n-- > 0)
		((unsigned char *)s)[n] = (unsigned char)c;
	return (s);
}
