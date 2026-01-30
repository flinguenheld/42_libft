/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lst_get_at.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 20:59:10 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/25 18:15:31 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lst_get_at(t_list *lst, int position)
{
	if (lst == NULL || position < 0)
		return (NULL);
	if (position == 0)
		return (lst);
	return (ft_lst_get_at(lst->next, position - 1));
}
