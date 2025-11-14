/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:03:44 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/14 18:01:18 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
Applies the function f to each character of the string s, passing its index as
the first argument and the character itself as the second. A new string is
created using malloc to store the results from the successive applications of f.

RETURN VALUE
The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.
*/
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
