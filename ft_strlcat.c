/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:07:01 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/09 22:06:09 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The strlcat() function appends the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst)-1 bytes, NUL-terminating the result.

RETURN VALUES
The strlcpy() and strlcat() functions return the total length of the
string they tried to create.
For strlcat() that means the initial length of dst plus the length of src.
While this may seem somewhat confusing, it was done to make truncation
detection simple.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	index;

	if ((dst == NULL && src == NULL) || size == 0)
		return (sizeof(char *));
	len_dst = ft_strlen(dst);
	index = 0;
	if (size <= len_dst)
		return (size + ft_strlen(src));
	while ((len_dst + index) < (size - 1) && src[index])
	{
		dst[len_dst + index] = src[index];
		index++;
	}
	dst[len_dst + index] = '\0';
	return (len_dst + ft_strlen(src));
}
