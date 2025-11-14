/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:10:15 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/14 18:01:18 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The  bzero()  function erases the data in the n bytes of the memory starting
at the location pointed to by s, by writing zeros (bytes containing '\0')
 to that area.

The explicit_bzero() function performs the same task as bzero().
It differs from bzero()  in  that  it guarantees that compiler optimizations
 will not remove the erase operation if the compiler deduces that
 the operation is "unnecessary".
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
