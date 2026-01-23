/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   02_is_not_integer_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:38:44 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/23 10:38:45 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "is_integer_tests.h"

int	is_not_int_1(void) {
	return (!ft_is_integer("+ 1"));
}

int	is_not_int_123(void)
{
	return (!ft_is_integer("  -   123"));
}

// --------------------------------------------------------------- 0 ----------
int	is_not_int_0(void)
{
	return (!ft_is_integer("zero"));
}

int	is_not_int_0000(void)
{
	return (!ft_is_integer(" a 0000"));
}

int	is_not_int_minus_0000(void)
{
	return (!ft_is_integer("-    0000"));
}

int	is_not_int_plus_0000(void)
{
	return (!ft_is_integer("+   0000"));
}

// --------------------------------------------------------------- OTHERS -----
int	is_not_int_spaces_123(void)
{
	return (!ft_is_integer("1        123"));
}

int	is_not_int_just_minus(void)
{
	return (!ft_is_integer("-"));
}

int	is_not_int_just_plus(void)
{
	return (!ft_is_integer("+"));
}

int	is_not_int_just_space(void)
{
	return (!ft_is_integer("+"));
}

int	is_not_int_nothing(void)
{
	return (!ft_is_integer(""));
}
