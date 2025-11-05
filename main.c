/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:31:17 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/05 17:45:50 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *print_bool(int val)
{
	if (val)
		return "true";
	else
		return "false";
}

int main(void)
{
	for (int i=0; i<255; i++)
	{
		// if (ft_isalpha(i))
		// 	printf("%c is alpha\n", i);
		// if (ft_isdigit(i))
		// 	printf("%c is digit\n", i);
		// if (ft_isalnum(i))
		// 	printf("%c is alnum\n", i);
		if (ft_isascii(i))
			printf("%c is ascii\n", i);
	}

	return 0;
}
