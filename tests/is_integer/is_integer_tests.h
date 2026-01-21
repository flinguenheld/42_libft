/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   is_integer_tests.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/13 23:50:50 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_INTEGER_H
# define IS_INTEGER_H

#include "../framework/libunit.h"

// Launcher used in main
int	is_integer_launcher(t_count *final_counter);

int	is_int_1(void);
int	is_int_123(void);
int	is_int_0(void);
int	is_int_0000(void);
int	is_int_0000000000000002(void);
int	is_int_space_minus_0000000000000002(void);
int	is_int_minus_0000(void);
int	is_int_plus_0000(void);
int	is_int_spaces_123(void);
int	is_int_max(void);
int	is_int_min(void);
int	is_long_max(void);
int	is_long_min(void);

int	is_not_int_1(void);
int	is_not_int_123(void);
int	is_not_int_0(void);
int	is_not_int_0000(void);
int	is_not_int_minus_0000(void);
int	is_not_int_plus_0000(void);
int	is_not_int_spaces_123(void);
int	is_not_int_just_minus(void);
int	is_not_int_just_plus(void);
int	is_not_int_just_space(void);
int	is_not_int_nothing(void);

#endif
