/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   01_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <florent@linguenheld.net>          +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:23 by flinguen          #+#    #+#             */
/*   Updated: 2026/01/29 20:05:02 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

/**
 * @brief
 * Open the file, compare, close and free.
 * @return
 * 1 if compare ok
 */
static int open_and_compare(char *file_name, char *to_compare, int len)
{
	int is_ok = 0;
	int fd = open(file_name, O_RDONLY);
	char *line = ft_get_next_line(fd);
	if (ft_strncmp(line, to_compare, len) == 0)
		is_ok = 1;
	close(fd);
	free(line);
	return (is_ok);
}

int	no_file(void)
{
	char *line = ft_get_next_line(1000000);
	return (line == NULL);
}

int	simple_line(void)
{
	return (open_and_compare("./get_next_line/_simple_line.gnl", "Mange ton chien\n", 16));
}
int	simple_line_no_nl(void)
{
	return (open_and_compare("./get_next_line/_simple_line_no_nl.gnl", "Mange ton chat", 14));
}
int	long_line_1000_chars(void)
{
	return (open_and_compare("./get_next_line/_long_line_1000_chars.gnl", "Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange ton chien Mange t\n", 1000));
}

static int open_and_compare_multilines(char *file_name, char **to_compare, int to_compare_len)
{
	int fd = open(file_name, O_RDONLY);

	int index = 0;
	while (1)
	{
		char *line = ft_get_next_line(fd);
		if (line == NULL)
			break;
		if (ft_strncmp(line, to_compare[index], ft_strlen(to_compare[index])) != 0)
			return 0;
		free(line);
		index++;
	}
	close(fd);
	return (to_compare_len != index + 1);
}

int	ten_lines(void)
{
	char *values[10] = {"line 01\n",
						"line 020202\n",
						"line 03\n",
						"line 04\n",
						"line 05 hop hop hop\n",
						"line 06\n",
						"line 07\n",
						"line 08\n",
						"line 09\n",
						"That's the last line\n" };
	return (open_and_compare_multilines("./get_next_line/_ten_lines.gnl", values, 10));
}

int	one_hundred_lines(void)
{
	char *values[100];
	for (int i=0; i<100; i++)
		values[i] = ft_itoa(i);

	int is_ok = open_and_compare_multilines("./get_next_line/_one_hundred_lines.gnl", values, 100);

	for (int i=0; i<100; i++)
		free(values[i]);

	return (is_ok);
}
