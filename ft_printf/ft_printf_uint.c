/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   uint.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 00:21:27 by flinguen          #+#    #+#             */
/*   Updated: 2025/12/21 20:19:39 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_uint(unsigned int value, t_flags flags)
{
	char	*unsigned_value_str;

	unsigned_value_str = ft_ultobase(value, "0123456789");
	flags.hexa = "";
	flags.plus = 0;
	flags = up_flags_number(0, unsigned_value_str, flags);
	return (print_number(0, unsigned_value_str, flags));
}
