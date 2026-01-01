/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 19:06:51 by flinguen          #+#    #+#             */
/*   Updated: 2025/12/21 20:19:39 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int value, t_flags flags)
{
	char	*unsigned_value_str;

	if (value < 0)
		unsigned_value_str = ft_ultobase(-(long)value, "0123456789");
	else
		unsigned_value_str = ft_ultobase(value, "0123456789");
	flags.hexa = "";
	flags = up_flags_number(value < 0, unsigned_value_str, flags);
	return (print_number((value < 0), unsigned_value_str, flags));
}
