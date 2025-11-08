/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:34:05 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/08 22:57:39 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The strlcpy() function copies up to size - 1 characters from the NUL-terminated
 string src to dst, NUL-terminating the result.

RETURN VALUES
The strlcpy() and strlcat() functions return the total length of the
string they tried to create.
For strlcat() that means the initial length of dst plus the length of src.
While this may seem somewhat confusing, it was done to make truncation
detection simple.
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
