/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:07:01 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/14 21:26:37 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The strlcat() function appends the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst)-1 bytes, NUL-terminating the result.

RETURN VALUES
The strlcat function returns the total length of the string it tried to create.
That means the initial length of dst plus the length of src.
While this may seem somewhat confusing, it was done to make truncation
detection simple.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;

	if (size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (size + ft_strlen(src));
	return (dst_len + ft_strlcpy(dst + dst_len, src, size - dst_len));
}
