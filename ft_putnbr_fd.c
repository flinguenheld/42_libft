/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:48:42 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/11 21:01:52 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
Outputs the integer ’n’ to the specified file descriptor.
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	*array;

	array = ft_itoa(n);
	if (array != NULL)
	{
		ft_putstr_fd(array, fd);
		free(array);
	}
}
