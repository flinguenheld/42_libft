/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:31:17 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/06 15:13:50 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *print_bool(int val)
{
	if (val)
		return "true";
	else
		return "false";
}

int main(void)
{
	printf("\n################################################## IS_    ###\n");
	for (int i=0; i<255; i++)
	{
		// if (ft_isalpha(i))
		// 	printf("%c is alpha\n", i);
		// if (ft_isdigit(i))
		// 	printf("%c is digit\n", i);
		// if (ft_isalnum(i))
		// 	printf("%c is alnum\n", i);
		// if (ft_isascii(i))
		// 	printf("%c is ascii\n", i);
	}

	printf("\n################################################## STRLEN ###\n");
	printf("'' -> %zu\n", ft_strlen(""));
	printf("'a' -> %zu\n", ft_strlen("a"));
	printf("'abcdefghijklmnopqrstuvwxyz' -> %zu\n", ft_strlen("abcdefghijklmnopqrstuvwxyz"));

	printf("\n################################################## MEMSET ###\n");
	// The real funct doesn't check nb_to_set
	// Nor the tab, it can be empty

	#define TAB_LEN_MEMSET 5
	const int value_to_set_memset = 0;
	const size_t nb_to_set_memset = 3;

	int tab_memset[TAB_LEN_MEMSET] = {10, 11, 12, 14, 15};
	int tab_memset_real[TAB_LEN_MEMSET] = {10, 11, 12, 14, 15};
	// int tab_memset[TAB_LEN_MEMSET] = {};
	// int tab_memset_real[TAB_LEN_MEMSET] = {};

	for (int i=0; i < TAB_LEN_MEMSET; i++)
		printf("%d ", tab_memset[i]);
	
	printf("\n");
	int *set = ft_memset((void *)tab_memset, value_to_set_memset, nb_to_set_memset * sizeof(int));
	for (int i=0; i < TAB_LEN_MEMSET; i++)
		printf("%d ", set[i]);

	printf("\n##################### MEMSET REAL ONE ###\n");
	for (int i=0; i < TAB_LEN_MEMSET; i++)
		printf("%d ", tab_memset_real[i]);
	
	printf("\n");
	int *set_real = memset((void *)tab_memset_real, value_to_set_memset, nb_to_set_memset * sizeof(int));
	for (int i=0; i < TAB_LEN_MEMSET; i++)
		printf("%d ", set_real[i]);

	printf("\n################################################## BZERO ####\n");
	#define TAB_LEN_BZERO 5
	const size_t nb_to_set_bzero = 3;

	int tab_bzero[TAB_LEN_BZERO] = {10, 11, 12, 14, 15};
	int tab_bzero_real[TAB_LEN_BZERO] = {10, 11, 12, 14, 15};
	// int tab_bzero[TAB_LEN_BZERO] = {};
	// int tab_bzero_real[TAB_LEN_BZERO] = {};

	for (int i=0; i < TAB_LEN_BZERO; i++)
		printf("%d ", tab_bzero[i]);

	printf("\n");
	ft_bzero((void *)tab_bzero, nb_to_set_bzero * sizeof(int));
	for (int i=0; i < TAB_LEN_BZERO; i++)
		printf("%d ", tab_bzero[i]);

	printf("\n###################### BZERO REAL ONE ###\n");
	for (int i=0; i < TAB_LEN_BZERO; i++)
		printf("%d ", tab_bzero_real[i]);

	printf("\n");
	bzero((void *)tab_bzero_real, nb_to_set_bzero * sizeof(int));
	for (int i=0; i < TAB_LEN_BZERO; i++)
		printf("%d ", tab_bzero_real[i]);

	printf("\n################################################## MEMCPY ###\n");
	#define TAB_LEN_MEMCPY 5
	const size_t nb_to_memcpy = 1;

	int tab_memcpy_src[TAB_LEN_MEMCPY] = {10, 11, 12, 14, 15};
	int tab_memcpy_dst[TAB_LEN_MEMCPY] = {0, 0, 0, 0, 0};
	int tab_memcpy_dst_real[TAB_LEN_MEMCPY] = {0, 0, 0, 0, 0};

	printf("src: ");
	for (int i=0; i < TAB_LEN_MEMCPY; i++)
		printf("%d ", tab_memcpy_src[i]);
	printf("\ndst: ");
	for (int i=0; i < TAB_LEN_MEMCPY; i++)
		printf("%d ", tab_memcpy_dst[i]);

	printf("\n ->  ");
	ft_memcpy((void *)tab_memcpy_dst, (void *)tab_memcpy_src, nb_to_memcpy * sizeof(int));
	for (int i=0; i < TAB_LEN_MEMCPY; i++)
		printf("%d ", tab_memcpy_dst[i]);

	printf("\n###################### MEMCPY REAL ONE ###\n");
	printf(" ->  ");
	memcpy((void *)tab_memcpy_dst_real, (void *)tab_memcpy_src, nb_to_memcpy * sizeof(int));
	for (int i=0; i < TAB_LEN_MEMCPY; i++)
		printf("%d ", tab_memcpy_dst_real[i]);
	return 0;
}
