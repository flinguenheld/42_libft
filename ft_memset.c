/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:08:09 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/08 22:56:07 by flinguen         ###   ########.fr       */
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
	unsigned char	*to_set;

	to_set = (unsigned char *)s;
	while (n)
	{
		*to_set = (unsigned char)c;
		to_set++;
		n--;
	}
	return (s);
}
