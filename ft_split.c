/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:58:13 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/10 19:54:41 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
DESCRIPTION
Add the substr ptr into to_fill.
Return the next position of to_fill,
*/
static char	**fill(char **to_fill, const char *s, size_t length)
{
	if (to_fill != NULL && length)
	{
		*to_fill = ft_substr(s, 0, length);
		to_fill++;
	}
	return (to_fill);
}

/*
DESCRIPTION
recursively get the next substr and add them in to_fill
return the number of substrs
to_fill = NULL to do a dry run
*/
static int	run(const char *s, char c, char **to_fill)
{
	int		counter;
	char	*to;

	counter = 0;
	if (*s != '\0')
	{
		to = ft_strchr(s, c);
		if (to == NULL || c == '\0')
		{
			counter++;
			to_fill = fill(to_fill, s, ft_strlen(s));
		}
		else
		{
			if ((to - s) > 0)
			{
				counter++;
				to_fill = fill(to_fill, s, to - s);
			}
			counter += (run(to + 1, c, to_fill));
		}
	}
	return (counter);
}

/*
DESCRIPTION
Allocates memory (using malloc(3)) and returns an array of strings obtained by
splitting ’s’ using the character ’c’ as a delimiter.
The array must end with a NULL pointer.

RETURN VALUE
The array of new strings resulting from the split.
NULL if the allocation fails.
*/
char	**ft_split(char const *s, char c)
{
	int		count;
	char	**tab;

	if (s == NULL)
		return (NULL);
	count = run(s, c, NULL);
	tab = ft_calloc(count + 1, sizeof(char *));
	if (tab != NULL)
		run(s, c, tab);
	return (tab);
}
