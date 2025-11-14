/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:31:32 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/14 18:01:19 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
Outputs the string ’s’ to the specified file descriptor.
*/
void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		while (*s)
			ft_putchar_fd(*s++, fd);
}
