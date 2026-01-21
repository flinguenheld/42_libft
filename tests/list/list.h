/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/21 17:19:43 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_TESTS_H
# define LIST_TESTS_H

#include "../framework/libunit.h"
#include "../../libft.h"

// Launcher used in main
int	list_launcher(t_lu_counter *final_counter);

int	clone_list_empty(void);
int	clone_list_100_nodes(void);

#endif
