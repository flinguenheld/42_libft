/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/25 18:15:33 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	list_launcher(t_lu_counter *final_counter)
{
	t_lu_list	*list;

	list = NULL;
	load_test(&list, "ft_clone  -> Clone empty list",              &clone_list_empty);
	load_test(&list, "ft_clone  -> Clone 100 nodes",               &clone_list_100_nodes);

	load_test(&list, "ft_init   -> Init 0 node returns NULL",      &init_0_node_returns_null);
	load_test(&list, "ft_init   -> Init 1 node at 0",              &init_1_node_at_0);
	load_test(&list, "ft_init   -> Init 100 nodes at 1",           &init_100_nodes_at_1);
	load_test(&list, "ft_init   -> Init 1000 nodes at 'F'",        &init_1000_nodes_at_F);

	load_test(&list, "ft_get_at -> Empty list return NULL",        &get_at_empty_list_return_NULL);
	load_test(&list, "ft_get_at -> Negative position return NULL", &get_at_negative_position_return_NULL);
	load_test(&list, "ft_get_at -> position 0 is ok",              &get_at_negative_position_return_NULL);
	load_test(&list, "ft_get_at -> positions 0 to 99 ok",          &get_at_0_to_100_are_ok);

	return (launch_tests("LIST", list, final_counter));
}
