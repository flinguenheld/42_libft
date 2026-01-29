/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 21:51:27 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/29 14:26:23 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft.h"

# ifndef GNL_BUFFER_SIZE
#  define GNL_BUFFER_SIZE 42
# endif

# ifndef GNL_NB_FILE_MAX
#  define GNL_NB_FILE_MAX 84
# endif

typedef struct s_remainder
{
	int		fd;
	char	rem[GNL_BUFFER_SIZE + 2 * sizeof(intptr_t)];
}	t_remainder;

void	save_ptr(char *remainder, char *ptr, size_t who);
char	*get_ptr(char *remainder, size_t who);
char	*get_remainder(t_remainder *remainders, int fd);

#endif
