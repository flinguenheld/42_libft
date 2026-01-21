/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/13 23:50:48 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework/libunit.h"

// --
// #include "template_tests/template_tests.h"
#include "list/list.h"
#include "is_integer/is_integer_tests.h"

int	main(void)
{
	// Create and init a counter --
	t_lu_counter	counter;

	counter = counter_init();

	// Add here all your launchers --
	// template_launcher(&counter);
	is_integer_launcher(&counter);
	list_launcher(&counter);

	// Print a summary of successful tests --
	print_final_counter(&counter);
	if (counter.success != counter.total)
		return (-1);
	return (0);
}
