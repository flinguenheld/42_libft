/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:33:26 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/08 17:02:16 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	is_neg;
	int	value;

	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	value = 0;
	is_neg = 0;
	if (*nptr == '-' || *nptr == '+')
	{
		is_neg = (*nptr == '-');
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		value = value * 10 + (*nptr - '0');
		nptr++;
	}
	if (is_neg)
		value = -value;
	return (value);
}
