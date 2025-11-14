/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:58:13 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/14 20:44:51 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
Recursively get the next substr and add them in to_fill.
Exclude empty str.
to_fill = NULL to do a dry run.

RETURN VALUE
return the number of substrs
*/
static int	run(const char *str, char delimiter, char **to_fill)
{
	char	*next_delimiter;

	if (*str != '\0')
	{
		next_delimiter = ft_strchr(str, delimiter);
		if (next_delimiter == NULL || delimiter == '\0')
		{
			fill(to_fill, str, ft_strlen(str));
			return (1);
		}
		else if ((next_delimiter - str) > 0)
		{
			to_fill = fill(to_fill, str, next_delimiter - str);
			return (1 + run(next_delimiter + 1, delimiter, to_fill));
		}
		return (run(next_delimiter + 1, delimiter, to_fill));
	}
	return (0);
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

	tab = NULL;
	if (s != NULL)
	{
		count = run(s, c, NULL);
		tab = ft_calloc(count + 1, sizeof(char *));
		if (tab != NULL)
			run(s, c, tab);
	}
	return (tab);
}
