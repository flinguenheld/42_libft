/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:03:51 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/17 16:15:05 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The  strcmp() function compares the two strings s1 and s2.  The locale is not
taken into account (for a locale-aware comparison, see strcoll(3)).
The comparison is done using unsigned characters.

       strcmp() returns an integer indicating the result of the comparison:
       • 0, if the s1 and s2 are equal;
       • a negative value if s1 is less than s2;
       • a positive value if s1 is greater than s2.
       The strncmp() function is similar, except it compares only the first
       (at most) n bytes of s1 and s2.

RETURN VALUE
The strcmp() and strncmp() functions return an integer less than, equal to,
or greater than zero if  s1 (or  the  first  n bytes thereof) is found,
respectively, to be less than, to match, or be greater than s2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n <= 0)
		return (0);
	while (n > 1 && *s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
