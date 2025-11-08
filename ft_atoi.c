/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:33:26 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/08 22:56:07 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
The atoi() function converts the initial portion of the string pointed to by 
nptr to int.  The behavior is the same as 'strtol(nptr, NULL, 10);'
except that atoi() does not detect errors.

The atol() and atoll() functions behave the same as atoi(),
except that they convert the initial portion of the string to their return 
type of long or long long.
RETURN VALUE
The converted value or 0 on error.
*/
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
