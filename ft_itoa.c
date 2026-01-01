/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:01:36 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/01 20:00:42 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ltoa(long value)
{
	return (ft_ltobase(value, "0123456789"));
}

char	*ft_itoa(int value)
{
	return (ft_ltobase((long)value, "0123456789"));
}

char	*ft_utoa(unsigned int value)
{
	return (ft_ltobase((long)value, "0123456789"));
}
