/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   01_is_integer_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/13 23:50:50 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is_integer_tests.h"

int	is_int_1(void) {
	return (ft_is_integer("1"));
}

int	is_int_123(void)
{
	return (ft_is_integer("123"));
}

// --------------------------------------------------------------- 0 ----------
int	is_int_0(void)
{
	return (ft_is_integer("0"));
}

int	is_int_0000(void)
{
	return (ft_is_integer("0000"));
}

int	is_int_0000000000000002(void)
{
	return (ft_is_integer("0000000000000002"));
}

int	is_int_space_minus_0000000000000002(void)
{
	return (ft_is_integer("   -0000000000000002"));
}

int	is_int_minus_0000(void)
{
	return (ft_is_integer("-0000"));
}

int	is_int_plus_0000(void)
{
	return (ft_is_integer("+0000"));
}

// --------------------------------------------------------------- SPACES -----
int	is_int_spaces_123(void)
{
	return (ft_is_integer("  123"));
}

// --------------------------------------------------------------- MAX --------
int	is_int_max(void)
{
	return (ft_is_integer("2147483647"));
}

int	is_int_min(void)
{
	return (ft_is_integer("-2147483648"));
}

int	is_long_max(void)
{
	return (ft_is_integer("+9223372036854775807"));
}

int	is_long_min(void)
{
	return (ft_is_integer("-9223372036854775808"));
}
