/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lst_clone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:22:27 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/21 11:43:32 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lst_clone(t_list *source, void *(*clone_content)(void *))
{
	t_list	*new_node;
	t_list	*new_list_start;
	t_list	*new_list_last_node;

	new_list_start = NULL;
	new_list_last_node = NULL;
	while (source != NULL)
	{
		new_node = ft_lst_new(clone_content(source->content));
		ft_lst_push_back(&new_list_last_node, new_node);
		if (new_list_start == NULL)
			new_list_start = new_node;
		new_list_last_node = new_node;
		source = source->next;
	}
	return (new_list_start);
}
