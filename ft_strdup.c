/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:41:06 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/08 22:56:07 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The strdup() function returns a pointer to a new string which is a duplicate
of the string s.  Memory for the new string is obtained with malloc(3),
and can be freed with free(3).

RETURN VALUE
On success, the strdup() function returns a pointer to the duplicated string.
It returns NULL  if  insufficient memory was available, with errno set to
indicate the cause of the error.
*/
char	*ft_strdup(const char *s)
{
	char	*new;
	char	*fill_me;

	new = malloc(ft_strlen(s) + 1);
	if (new != NULL)
	{
		fill_me = new;
		while (*s)
			*fill_me++ = *s++;
		*fill_me = '\0';
	}
	return (new);
}
