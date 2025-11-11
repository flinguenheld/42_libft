/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:01:36 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/11 13:34:35 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	get_size(int value)
{
	if (value == 0)
		return (1);
	else
		return (get_size(value / 10) + 1);
}

static void run(char *ptr, unsigned int value)
{
	if (value < 10)
		*ptr = value + '0';
	else
	{
		run(ptr - 1, value / 10);
		*ptr = (value % 10) + '0';
	}
}

/*
DESCRIPTION
Allocates memory (using malloc(3)) and returns a string representing the
integer received as an argument. Negative numbers must be handled.
*/
char	*ft_itoa(int n)
{
	int		length;
	char	*start;

	length = get_size(n / 10);
	if (n < 0)
		length++;
	// printf("value to calloc: %zu\n", length)
	start = ft_calloc((size_t)(length + 1), sizeof(char *));
	if (start != NULL)
	{
		if (n < 0)
		{
			run(start + length - 1, (unsigned int) -n);
			*start = '-';
		}
		else
			run(start + length - 1, (unsigned int) n);
	}
	return (start);
}
