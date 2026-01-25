/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   03_lst_get_at.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:36:07 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/25 18:11:53 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static void *new_content(int value)
{
	int	*blah = malloc(sizeof(int));
	*blah = value;
	return (blah);
}

int	get_at_empty_list_return_NULL()
{
	t_list *source = NULL;
	t_list *node_found = ft_lst_get_at(source, 5);
	return (node_found == NULL);
}

int	get_at_negative_position_return_NULL()
{
	char ok = 0;
	t_list *source = ft_lst_new(new_content(0));
	for (int i=0; i<10; i++)
		ft_lst_push_back(&source, ft_lst_new(new_content(i)));

	t_list *node_found = ft_lst_get_at(source, -1);

	if (node_found == NULL)
		ok = 1;
	ft_lst_clear(&source, free);
	return (ok);
}

int	get_at_0_is_ok()
{
	char ok = 0;
	t_list *source = ft_lst_new(new_content(0));
	for (int i=0; i<10; i++)
		ft_lst_push_back(&source, ft_lst_new(new_content(i)));

	t_list *node_found = ft_lst_get_at(source, -1);

	if (*(int *)node_found->content == 0)
		ok = 1;
	ft_lst_clear(&source, free);
	return (ok);
}

int	get_at_0_to_100_are_ok()
{
	char ok = 1;
	t_list *source = NULL;
	for (int i=0; i<=100; i++)
		ft_lst_push_back(&source, ft_lst_new(new_content(i)));

	for (int i=100; i>=0; i--)
	{
		t_list *node_found = ft_lst_get_at(source, i);
		if (*(int *)node_found->content != i)
			ok = 0;
	}

	ft_lst_clear(&source, free);
	return (ok);
}
