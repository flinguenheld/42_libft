/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:20:09 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/09 20:04:27 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
Allocates memory (using malloc(3)) and returns a copy of ’s1’ with characters
from ’set’ removed from the beginning and the end.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	from;
	size_t	to;

	from = 0;
	to = ft_strlen(s1) -1;
	while (s1[from] && ft_strchr(set, s1[from]) != NULL)
		from++;
	while (to && ft_strrchr(set, s1[to]) != NULL)
		to--;
	return (ft_substr(s1, from, to - from + 1));
}
