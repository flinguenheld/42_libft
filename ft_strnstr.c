/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:56:18 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/10 14:08:47 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The strnstr() function locates the first occurrence of the null-terminated
string little in the string big, where not more than len characters are
searched.  Characters that appear after a ‘\0’ character are not searched.

RETURN VALUES
If little is an empty string, big is returned; if little occurs nowhere in big,
NULL is returned; otherwise a pointer to the first character of the first
occurrence of little is returned.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	if (len > 0)
	{
		while (*big && len >= little_len)
		{
			if (ft_strncmp(big, little, little_len) == 0)
				return ((char *)big);
			big++;
			len--;
		}
	}
	return (NULL);
}
