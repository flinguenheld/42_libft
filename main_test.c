/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:14:54 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/03 22:51:21 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int *new_content(int value)
{
	int *content = malloc(sizeof(int));
	*content = value;
	return content;
}

void print_node(void *content)
{
	ft_printf("value -> %d\n", *(int *)(content));
}

void test_list_pop_back()
{
	ft_printf("-----------------------------------------------------------\n");
	ft_printf("---------------------------------------- TEST POP BACK ----\n");

	t_list *node_aaa = ft_lst_new(new_content(1));
	ft_lst_push_back(&node_aaa, ft_lst_new(new_content(2)));
	ft_lst_push_back(&node_aaa, ft_lst_new(new_content(3)));
	ft_lst_push_back(&node_aaa, ft_lst_new(new_content(4)));
	ft_lst_push_back(&node_aaa, ft_lst_new(new_content(5)));

	ft_printf("before pop --\n");
	ft_lst_iter(node_aaa, print_node);

	ft_printf("\n");
	ft_printf("Pop and print --\n");
	while (node_aaa != NULL)
	{
		t_list *last = ft_lst_pop_back(&node_aaa);
		print_node(last->content);
		free(last);
	}
}

void test_list_swap()
{
	ft_printf("-----------------------------------------------------------\n");
	ft_printf("-------------------------------------------- TEST SWAP ----\n");

	t_list *node_aaa = ft_lst_new(new_content(1));
	t_list *node_bbb = ft_lst_new(new_content(2));
	t_list *node_ccc = ft_lst_new(new_content(3));
	t_list *node_ddd = ft_lst_new(new_content(4));
	t_list *node_eee = ft_lst_new(new_content(5));

	ft_lst_push_back(&node_aaa, node_bbb);
	ft_lst_push_back(&node_aaa, node_ccc);
	ft_lst_push_back(&node_aaa, node_ddd);
	ft_lst_push_back(&node_aaa, node_eee);

	ft_printf("before swap --\n");
	ft_lst_iter(node_aaa, print_node);

	ft_lst_swap(node_aaa, node_eee);
	ft_lst_swap(node_bbb, node_ddd);

	ft_printf("\n");
	ft_printf("after swap --\n");
	ft_lst_iter(node_aaa, print_node);

	ft_lst_clear_basic(&node_aaa);
}

int main()
{
	ft_printf("MAIN TEST --\n");
	// ------------------------------------------------------------------------
	// ------------------------------------------------------- TEST LISTS -----
	test_list_swap();
	test_list_pop_back();

	return 0;
}
