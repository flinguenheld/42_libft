/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   01_lst_clone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
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

static void *clone_content(void *content)
{
	int	*blah = malloc(sizeof(int));
	*blah = *(int *)content;
	return (blah);
}

int	clone_list_empty(void)
{
	t_list *source = NULL;
	t_list *cloned = ft_lst_clone(source, clone_content);

	return (cloned == NULL);
}

int	clone_list_100_nodes(void)
{
	t_list *source = NULL;
	for (int i=0; i<100; i++)
		ft_lst_push_back(&source, ft_lst_new(new_content(i)));

	t_list *cloned = ft_lst_clone(source, clone_content);

	if (cloned == NULL || ft_lst_size(source) != ft_lst_size(cloned))
		return (0);
	t_list *source_current = source;
	t_list *cloned_current = cloned;
	while (source_current != NULL)
	{
		if (*(int *)source_current->content != *(int *)cloned_current->content) 
			return (0);
		source_current = source_current->next;
		cloned_current = cloned_current->next;
	}

	ft_lst_clear(&source, free);
	ft_lst_clear(&cloned, free);
	return (1);
}

