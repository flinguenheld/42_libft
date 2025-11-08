/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:03:02 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/08 21:19:16 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
