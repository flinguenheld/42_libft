/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:20:48 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/14 20:44:52 by flinguen         ###   ########.fr       */
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
	char	*found;

	found = NULL;
	while (1)
	{
		if (*s == (unsigned char)c)
			found = (char *)s;
		if (*s == '\0')
			return (found);
		s++;
	}
}
