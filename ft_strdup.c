/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:41:06 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/13 16:57:06 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

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
	return (ft_substr(s, 0, SIZE_MAX));
}
