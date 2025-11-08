/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_ft_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:23:22 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/08 21:44:40 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
Allocates memory (using malloc(3)) and returns a new string.
Which is the result of concatenating ’s1’ and ’s2.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new != NULL)
	{
		ft_memcpy(new, s1, s1_len);
		ft_memcpy(new + s1_len, s2, s2_len);
		*(new + s1_len + s2_len) = '\0';
	}
	return (new);
}
