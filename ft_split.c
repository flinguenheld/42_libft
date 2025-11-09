/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:58:13 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/09 19:52:30 by flinguen         ###   ########.fr       */
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
	printf("here we fill with: '%s' and length '%zu' \n", s, length);
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

	printf("here we deal with: %s\n", s);
	if (*s == '\0')
		return (0);
	else
	{
		counter = 1;
		to = ft_strchr(s, c);
		if (to == NULL || c == '\0')
			to_fill = fill(to_fill, s, ft_strlen(s));
		else
		{
			to_fill = fill(to_fill, s, to - s);
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

	count = run(s, c, NULL);
	printf("counter: %d\n", count);
	tab = ft_calloc(count + 1, sizeof(char *));
	if (tab != NULL)
		run(s, c, tab);
	return (tab);
}
