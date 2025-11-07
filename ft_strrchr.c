/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:20:48 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/07 21:55:15 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = (int)ft_strlen(s) + 1;
	while (index > -1)
	{
		if (s[index] == c)
			return ((char *)(s + index));
		index--;
	}
	return (NULL);
}
