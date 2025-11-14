/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:27:10 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/14 21:23:48 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
Adds the node ’new’ at the beginning of the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	(*lst) = new;
}
