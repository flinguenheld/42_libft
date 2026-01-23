/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/23 11:01:02 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_TESTS_H
# define LIST_TESTS_H

#include "../framework/libunit.h"
#include "../../libft.h"

// Launcher used in main
int	list_launcher(t_lu_counter *final_counter);

int	clone_list_empty(void);
int	clone_list_100_nodes(void);

int	init_0_node_returns_null();
int	init_1_node_at_0();
int	init_100_nodes_at_1();
int	init_1000_nodes_at_F();

#endif
