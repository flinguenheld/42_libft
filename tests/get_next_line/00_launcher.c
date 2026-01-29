/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/29 20:05:02 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

int	gnl_launcher(t_lu_counter *final_counter)
{
	t_lu_list	*list;

	list = NULL;
	load_test(&list, "No file returns NULL",                    &no_file);
	load_test(&list, "Simple line",                             &simple_line);
	load_test(&list, "Simple line without new line at the end", &simple_line_no_nl);
	load_test(&list, "Long line 1000 chars",                    &long_line_1000_chars);
	load_test(&list, "10 lines in one file",                    &ten_lines);
	load_test(&list, "100 lines in one file",                   &one_hundred_lines);

	return (launch_tests("GNL", list, final_counter));
}
