/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:18:33 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/15 18:02:58 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL)
	{
		f(lst->content);
		ft_lstiter(lst->next, f);
	}
}
