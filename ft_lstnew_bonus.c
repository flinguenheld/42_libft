/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:09:09 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/14 18:24:06 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
Allocates memory (using malloc(3)) and returns a new node.
The ’content’ member variable is initialized with the given parameter ’content’.
The variable ’next’ is initialized to NULL.

RETURN VALUE
A pointer to the new node.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;
	new_node = malloc(sizeof(t_list));
	if (new_node != NULL)
	{
		new_node->content = content;
		new_node->next = NULL;
	}
	return (new_node);
}
