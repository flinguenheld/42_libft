/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lst_remove_if.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 20:59:10 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/17 14:10:25 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lst_remove_if(t_list **lst, void *key,
							int (*comparison)(void *, void *),
							void (*del)(void *))
{
	t_list	*current_to_free;

	if (lst == NULL)
		return ;
	if (comparison(key, (*lst)->content) == 1)
	{
		current_to_free = *lst;
		*lst = current_to_free->next;
		ft_lst_delone(current_to_free, del);
	}
	else
		ft_lst_remove_if(&(*lst)->next, key, comparison, del);
}
