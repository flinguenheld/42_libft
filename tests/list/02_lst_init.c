/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   02_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:36:07 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/23 17:43:02 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

void *test_init_node_at_0(void)
{
	int *value = malloc(sizeof(int));
	*value = 0;
	return (value);
}

void *test_init_node_at_1(void)
{
	int *value = malloc(sizeof(int));
	*value = 1;
	return (value);
}

static void *test_init_node_at_F(void)
{
	char *value = malloc(sizeof(char));
	*value = 'F';
	return (value);
}

int	init_0_node_returns_null()
{
	t_list *new_list = ft_lst_init(0, &test_init_node_at_1);
	return (new_list == NULL);
}

int	init_1_node_at_0()
{
	t_list *new_list = ft_lst_init(1, &test_init_node_at_0);
	// ft_printf("value: %d\n", (*(int*)new_list->content));

	if ((*(int*)new_list->content == 0) && new_list->next == NULL)
	{
		ft_lst_clear(&new_list, free);
		return 1;
	}
	return 0;
}

int	init_100_nodes_at_1()
{
	t_list *new_list = ft_lst_init(100, &test_init_node_at_1);

	// Change the first value to check if it does not affect the others
	*(int *)new_list->content = 2222;

	// Move to the next one
	t_list *current_node = new_list->next;
	int counter = 1;
	while (current_node != NULL)
	{
		if (*(int*)current_node->content != 1) 
			return (0);
		current_node = current_node->next;
		counter++;
	}
	ft_lst_clear(&new_list, free);
	if (counter != 100)
		return (0);
	return (1);
}

int	init_1000_nodes_at_F()
{
	t_list *new_list = ft_lst_init(1000, &test_init_node_at_F);
	t_list *current_node = new_list;

	// Change the last value to check if it does not affect the others
	*(int *)ft_lst_last(new_list)->content = 'A';

	int counter = 0;
	while (current_node->next != NULL)
	{
		if (*(char *)current_node->content != 'F') 
			return (0);
		current_node = current_node->next;
		counter++;
	}
	if (counter != 999)
		return (0);
	if (*(int*)current_node->content == 'A')
	{
		ft_lst_clear(&new_list, free);
		return (1);
	}
	return (0);
}
