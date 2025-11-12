/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:23:22 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/12 18:16:44 by flinguen         ###   ########.fr       */
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
	size_t	buffer_size;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	buffer_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = ft_calloc(buffer_size, sizeof(char));
	if (new != NULL)
	{
		ft_strlcpy(new, s1, buffer_size);
		ft_strlcat(new, s2, buffer_size);
	}
	return (new);
}
