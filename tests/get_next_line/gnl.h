/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/29 20:05:02 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_TESTS_H
# define GNL_TESTS_H

#include "../framework/libunit.h"
#include "../../libft.h"
#include "fcntl.h"
#include <stddef.h>
#include <stdint.h>

// Launcher used in main
int	gnl_launcher(t_lu_counter *final_counter);

int	no_file(void);
int	simple_line(void);
int	simple_line_no_nl(void);
int	long_line_1000_chars(void);
int	ten_lines(void);
int	one_hundred_lines(void);

#endif
