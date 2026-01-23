/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lst_push_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:27:10 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/23 10:30:36 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lst_push_front(t_list **lst, t_list *new_node)
{
	if (new_node != NULL)
	{
		new_node->next = *lst;
		(*lst) = new_node;
	}
}
