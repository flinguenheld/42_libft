/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:08:09 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/05 22:20:07 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	// CHAR OR ANOTHER TYPE ???
	char	*to_set;

	to_set = (char *)s;
	while (n)
	{
		*to_set = (char)c;
		to_set++;
		n--;
	}
	return (s);
}
