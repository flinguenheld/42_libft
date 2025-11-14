/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:53:41 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/14 20:44:52 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION
Applies the function ’f’ to each character of the string passed as argument,
passing its index as the first argument. Each character is passed by
address to ’f’ so it can be modified if necessary.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	if (s != NULL)
	{
		index = 0;
		while (s[index])
		{
			f(index, &s[index]);
			index++;
		}
	}
}
