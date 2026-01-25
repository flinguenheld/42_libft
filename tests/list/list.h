/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/25 18:11:53 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_TESTS_H
# define LIST_TESTS_H

#include "../framework/libunit.h"
#include "../../libft.h"

// Launcher used in main
int	list_launcher(t_lu_counter *final_counter);

int	clone_list_empty();
int	clone_list_100_nodes();

int	init_0_node_returns_null();
int	init_1_node_at_0();
int	init_100_nodes_at_1();
int	init_1000_nodes_at_F();

int	get_at_empty_list_return_NULL();
int	get_at_negative_position_return_NULL();
int	get_at_0_is_ok();
int	get_at_0_to_100_are_ok();

#endif
