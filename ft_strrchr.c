/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:20:48 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/11 23:03:59 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The strchr() function returns a pointer to the first occurrence of the
 character c in the string s.

RETURN VALUE
The strrchr() function returns a pointer to the matched character
or NULL if the character is not found.  The terminating null byte is
considered part of the string, so that if c is specified as
'\0', this function returns a pointer to the terminator.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*end;

	c %= 256;
	end = ((char *)s) + ft_strlen(s);
	while (1)
	{
		if (*end == c)
			return (end);
		if (end == s)
			return (NULL);
		end--;
	}
}
