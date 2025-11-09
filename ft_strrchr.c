/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:20:48 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/09 21:24:45 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The strchr() function returns a pointer to the first occurrence of the
 character c in the string s.

RETURN VALUE
The strchr() and strrchr() functions return a pointer to the matched character
or NULL if the character is not found.  The terminating null byte is
considered part of the string, so that if c is specified as
'\0', these functions return a pointer to the terminator.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = (int)ft_strlen(s);
	while (index > -1)
	{
		if (s[index] == c)
			return ((char *)(s + index));
		index--;
	}
	return (NULL);
}
