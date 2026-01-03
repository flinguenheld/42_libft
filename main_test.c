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

int main()
{
	ft_printf("MAIN TEST --\n");
	// ------------------------------------------------------------------------
	// ------------------------------------------------------- TEST LISTS -----

	t_list *node_aaa = ft_lst_new(new_content(1));
	t_list *node_bbb = ft_lst_new(new_content(2));
	t_list *node_ccc = ft_lst_new(new_content(3));
	t_list *node_ddd = ft_lst_new(new_content(4));
	t_list *node_eee = ft_lst_new(new_content(5));

	ft_lst_push_back(&node_aaa, node_bbb);
	ft_lst_push_back(&node_bbb, node_ccc);
	ft_lst_push_back(&node_aaa, node_ddd);
	ft_lst_push_back(&node_aaa, node_eee);

	ft_lst_iter(node_aaa, print_node);
	ft_lst_clear_basic(&node_aaa);


	return 0;
}
