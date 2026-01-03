/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 21:26:48 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/01 22:35:44 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lst_size(t_list *lst)
{
	if (lst == NULL)
		return (0);
	if (lst->next == NULL)
		return (1);
	return (ft_lst_size(lst->next) + 1);
}
