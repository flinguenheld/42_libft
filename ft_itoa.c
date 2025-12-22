/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:01:36 by flinguen          #+#    #+#             */
/*   Updated: 2025/12/21 20:19:39 by flinguen         ###   ########.fr       */
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
