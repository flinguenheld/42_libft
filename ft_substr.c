/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:03:02 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/08 22:56:07 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
Allocates memory (using malloc(3)) and returns a substring from the string ’s’.
The substring starts at index ’start’ and has a maximum length of ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = NULL;
	if (start < ft_strlen(s))
	{
		sub = malloc(len + 1);
		if (sub != NULL)
		{
			ft_memcpy(sub, s + start, len);
			*(sub + len) = '\0';
		}
	}
	return (sub);
}
