/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:01:36 by flinguen          #+#    #+#             */
/*   Updated: 2025/12/05 18:19:18 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(int value)
{
	if (value == 0)
		return (1);
	return (get_size(value / 10) + 1);
}

static void	run(char *ptr, unsigned int value)
{
	if (value > 9)
		run(ptr - 1, value / 10);
	*ptr = (value % 10) + '0';
}

char	*ft_itoa(int n)
{
	size_t	length;
	char	*start;

	length = get_size(n / 10);
	if (n < 0)
		length++;
	start = ft_calloc(length + 1, sizeof(char));
	if (start != NULL)
	{
		if (n < 0)
		{
			n = -n;
			*start = '-';
		}
		run(start + length - 1, (unsigned int) n);
	}
	return (start);
}
