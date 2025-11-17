/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:03:44 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/17 23:12:08 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*duplicated;
	size_t	index;

	if (s == NULL)
		return (NULL);
	duplicated = ft_strdup(s);
	if (duplicated != NULL)
	{
		index = 0;
		while (duplicated[index])
		{
			duplicated[index] = f(index, duplicated[index]);
			index++;
		}
	}
	return (duplicated);
}
