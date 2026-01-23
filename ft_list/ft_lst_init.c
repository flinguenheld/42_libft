/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:38:44 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/23 11:08:40 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lst_init(int size, void *(*init_content(void)))
{
	t_list	*new_list;

	new_list = NULL;
	if (size > 0)
	{
		while (size--)
			ft_lst_push_front(&new_list, ft_lst_new(init_content));
	}
	return (new_list);
}
