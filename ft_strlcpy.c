/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:34:05 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/12 18:16:45 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The strlcpy() function copies up to size - 1 characters from the NUL-terminated
 string src to dst, NUL-terminating the result.

RETURN VALUES
The strlcpy() function returns the total length of the
string they tried to create.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (size > 0)
	{
		while (*src && (size - 1))
		{
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
	}
	return (len);
}
