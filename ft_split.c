/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:58:13 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/17 16:15:05 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
DESCRIPTION
Add the substr ptr into to_fill.
Increment to_fill

Return 1 if substr has failled
*/
static int	fill(char ***to_fill, const char *s, size_t length)
{
	char	*new;

	if (*to_fill != NULL && length)
	{
		new = ft_substr(s, 0, length);
		if (new == NULL)
			return (1);
		**to_fill = new;
		(*to_fill)++;
	}
	return (0);
}

/*
DESCRIPTION
Loop in tab_to_clear and free all str until the NULL terminator.
Then free tab_to_clear and set it to NULL.

Return 0
*/
static int	clear(char ***tab_to_clear)
{
	char	**word_to_clear;

	word_to_clear = *tab_to_clear;
	while (*word_to_clear != NULL)
	{
		free(*word_to_clear);
		word_to_clear++;
	}
	free(*tab_to_clear);
	*tab_to_clear = NULL;
	return (0);
}

/*
DESCRIPTION
Recursively get the next substr and add them in to_fill.
Exclude empty str.
to_fill = NULL to do a dry run.

If one substr creation has failled, free all existing substr and the tab itself.
Then set to_fill to NULL and return 0.

RETURN VALUE
Return the number of substrs or 0 in case of fail.
*/
static int	run(const char *str, char delimiter, char **to_fill, char **start)
{
	char	*next_delimiter;

	if (*str != '\0')
	{
		next_delimiter = ft_strchr(str, delimiter);
		if (next_delimiter == NULL || delimiter == '\0')
		{
			if (fill(&to_fill, str, ft_strlen(str)) == 1)
				return (clear(&start));
			return (1);
		}
		else if ((next_delimiter - str) > 0)
		{
			if (fill(&to_fill, str, next_delimiter - str) == 1)
				return (clear(&start));
			return (1 + run(next_delimiter + 1, delimiter, to_fill, start));
		}
		return (run(next_delimiter + 1, delimiter, to_fill, start));
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
		count = run(s, c, NULL, tab);
		tab = ft_calloc(count + 1, sizeof(char *));
		if (tab != NULL)
			run(s, c, tab, tab);
	}
	return (tab);
}
