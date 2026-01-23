/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/23 11:01:01 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"
#include "is_integer_tests.h"

int	is_integer_launcher(t_lu_counter *final_counter)
{
	t_lu_list	*list;

	list = NULL;
	load_test(&list, "'1'                    is a int", &is_int_1);
	load_test(&list, "'123'                  is a int", &is_int_123);
	load_test(&list, "'0'                    is a int", &is_int_0);
	load_test(&list, "'0000'                 is a int", &is_int_0000);
	load_test(&list, "'0000000000000002'     is a int", &is_int_0000000000000002);
	load_test(&list, "'   -0000000000000002' is a int", &is_int_space_minus_0000000000000002);
	load_test(&list, "'-0000'                is a int", &is_int_minus_0000);
	load_test(&list, "'+0000'                is a int", &is_int_plus_0000);
	load_test(&list, "'  123'                is a int", &is_int_spaces_123);

	load_test(&list, "'int max'              is a int", &is_int_spaces_123);
	load_test(&list, "'int min'              is a int", &is_int_spaces_123);

	load_test(&list, "'long max'             is a int", &is_int_spaces_123);
	load_test(&list, "'long min'             is a int", &is_int_spaces_123);

	load_test(&list, "'+ 1'                  is NOT a int", &is_not_int_1);
	load_test(&list, "'  -   123'            is NOT a int", &is_not_int_123);
	load_test(&list, "'zero'                 is NOT a int", &is_not_int_0);
	load_test(&list, "' a 0000'              is NOT a int", &is_not_int_0000);
	load_test(&list, "'-    0000'            is NOT a int", &is_not_int_minus_0000);
	load_test(&list, "'+   0000'             is NOT a int", &is_not_int_plus_0000);
	load_test(&list, "'1        123'         is NOT a int", &is_not_int_spaces_123);

	load_test(&list, "'-'                    is NOT a int", &is_not_int_just_minus);
	load_test(&list, "'+'                    is NOT a int", &is_not_int_just_plus);
	load_test(&list, "' '                    is NOT a int", &is_not_int_just_space);
	load_test(&list, "''                     is NOT a int", &is_not_int_nothing);

	return (launch_tests("IS INTEGER", list, final_counter));
}
