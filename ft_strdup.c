/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:41:06 by flinguen          #+#    #+#             */
/*   Updated: 2025/12/05 18:19:19 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ! Voluntarily segfault if 's' is NULL to fit the original !

char	*ft_strdup(const char *s)
{
	if (s == NULL)
		s += 42;
	return (ft_substr(s, 0, SIZE_MAX));
}
