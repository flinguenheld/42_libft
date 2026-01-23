/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/23 11:01:01 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	list_launcher(t_lu_counter *final_counter)
{
	t_lu_list	*list;

	list = NULL;
	load_test(&list, "ft_clone -> Clone empty list", &clone_list_empty);
	load_test(&list, "ft_clone -> Clone 100 nodes", &clone_list_100_nodes);

	load_test(&list, "ft_init  -> Init 0 node returns NULL", &init_0_node_returns_null);
	load_test(&list, "ft_init  -> Init 1 node at 0", &init_1_node_at_0);
	load_test(&list, "ft_init  -> Init 100 nodes at 1", &init_100_nodes_at_1);
	load_test(&list, "ft_init  -> Init 1000 nodes at 'F'", &init_1000_nodes_at_F);

	return (launch_tests("LIST", list, final_counter));
}
