/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:41:06 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/08 20:56:24 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
