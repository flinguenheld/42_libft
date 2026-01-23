/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   02_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:36:07 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/23 11:01:02 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

static void *test_init_node_at_0()
{
	int *value = malloc(sizeof(int));
	*value = 0;
	return (value);
}

static void *test_init_node_at_1()
{
	int *value = malloc(sizeof(int));
	*value = 1;
	return (value);
}

static void *test_init_node_at_F()
{
	char *value = malloc(sizeof(char));
	*value = 'F';
	return (value);
}

int	init_0_node_returns_null()
{
	t_list *new_list = ft_lst_init(0, test_init_node_at_1());
	return (new_list == NULL);
}

int	init_1_node_at_0()
{
	t_list *new_list = ft_lst_init(1, test_init_node_at_0());
	return ((*(int*)new_list->content == 0) && new_list->next == NULL);
}

int	init_100_nodes_at_1()
{
	t_list *new_list = ft_lst_init(1, test_init_node_at_1());

	t_list *current_node = new_list;
	for (int i=0; i<100; i++)
	{
		if (*(int*)current_node->content != 1) 
			return (0);
	}
	ft_lst_clear(&new_list, free);
	return (1);
}

int	init_1000_nodes_at_F()
{
	t_list *new_list = ft_lst_init(1, test_init_node_at_F());

	t_list *current_node = new_list;
	for (int i=0; i<1000; i++)
	{
		if (*(char *)current_node->content != 'F') 
			return (0);
	}
	ft_lst_clear(&new_list, free);
	return (1);
}
