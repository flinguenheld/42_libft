/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:55:44 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/13 12:53:30 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The strchr() function returns a pointer to the first occurrence of
the character c in the string s.

RETURN VALUE
The strchr() function returns a pointer to the matched character
or NULL if the character is not found.
The terminating null byte is considered part of the string, so that if c is
specified as '\0', this function returns a pointer to the terminator.
*/
char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		if (*s == '\0')
			return NULL;
		s++;
	}
}
