/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itohex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:05:57 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/01 20:00:41 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ltohex(long value)
{
	return (ft_ltobase(value, "0123456789ABCDEF"));
}

char	*ft_itohex(int value)
{
	return (ft_ltobase((long)value, "0123456789ABCDEF"));
}

char	*ft_utohex(unsigned int value)
{
	return (ft_ltobase((long)value, "0123456789ABCDEF"));
}
