/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:31:17 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/08 14:50:13 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <bsd/string.h>
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

	printf("\n##################### MEMSET REAL ###\n");
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

	printf("\n###################### BZERO REAL ###\n");
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

	printf("\n###################### MEMCPY REAL ###\n");
	printf(" ->  ");
	memcpy((void *)tab_memcpy_dst_real, (void *)tab_memcpy_src, nb_to_memcpy * sizeof(int));
	for (int i=0; i < TAB_LEN_MEMCPY; i++)
		printf("%d ", tab_memcpy_dst_real[i]);

	printf("\n###################################### MEMMOVE DEST < SRC ###\n");
	#define TAB_LEN_MEMMOVE 15
	const size_t nb_to_memmove = 5;
	const int gap_memmove = 2;

	int tab_memmove1[TAB_LEN_MEMMOVE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	int tab_memmove2[TAB_LEN_MEMMOVE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	for (int i=0; i < TAB_LEN_MEMMOVE; i++)
		printf("%d ", tab_memmove1[i]);

	printf("\n");
	printf("nb to move: %zu\n", nb_to_memmove);
	printf("gap from source to dest: %d\n", gap_memmove);
	printf("\n");

	ft_memmove((void *)(tab_memmove1), (void *)(tab_memmove1 + gap_memmove), nb_to_memmove * sizeof(int));

	for (int i=0; i < TAB_LEN_MEMMOVE; i++)
		printf("%d ", tab_memmove1[i]);

	printf("\n###################### MEMMOVE REAL ###\n");

	memmove((void *)(tab_memmove2), (void *)(tab_memmove2 + gap_memmove), nb_to_memmove * sizeof(int));

	for (int i=0; i < TAB_LEN_MEMMOVE; i++)
		printf("%d ", tab_memmove2[i]);

	printf("\n###################################### MEMMOVE DEST > SRC ###\n");
	#define TAB_LEN_MEMMOVE 15
	const size_t nb_to_memmove_rev = 5;
	const int gap_memmove_rev = 2;

	int tab_memmove_rev_1[TAB_LEN_MEMMOVE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	int tab_memmove_rev_2[TAB_LEN_MEMMOVE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	for (int i=0; i < TAB_LEN_MEMMOVE; i++)
		printf("%d ", tab_memmove_rev_1[i]);

	printf("\n");
	printf("nb to move: %zu\n", nb_to_memmove_rev);
	printf("gap from source to dest: %d\n", gap_memmove_rev);
	printf("\n");

	ft_memmove((void *)(tab_memmove_rev_1 + gap_memmove_rev), (void *)(tab_memmove_rev_1), nb_to_memmove_rev * sizeof(int));

	for (int i=0; i < TAB_LEN_MEMMOVE; i++)
		printf("%d ", tab_memmove_rev_1[i]);

	printf("\n###################### MEMMOVE REAL ###\n");
	memmove((void *)(tab_memmove_rev_2 + gap_memmove_rev), (void *)(tab_memmove_rev_2), nb_to_memmove_rev * sizeof(int));

	for (int i=0; i < TAB_LEN_MEMMOVE; i++)
		printf("%d ", tab_memmove_rev_2[i]);

	printf("\n################################################# STRLCPY ###\n");
	// TO_COPY_STRLCPY cannot be higher than the buffer size !
	// Otherwise, it destroys the next chars
	#define BUFFER_SIZE_STRLCPY 5
	#define TO_COPY_STRLCPY 5
	char *src_strlcpy = "abcdefghij";

	char dst_strlcpy[BUFFER_SIZE_STRLCPY];
	char dst_strlcpy_real[BUFFER_SIZE_STRLCPY];

	size_t amount_strlcpy = ft_strlcpy(dst_strlcpy, src_strlcpy, TO_COPY_STRLCPY);
	printf("-> %zu -> '%s'", amount_strlcpy, dst_strlcpy);

	printf("\n###################### STRLCPY REAL ###\n");

	size_t amount_strlcpy_real = strlcpy(dst_strlcpy_real, src_strlcpy, TO_COPY_STRLCPY);
	printf("-> %zu -> '%s'", amount_strlcpy_real, dst_strlcpy_real);

	printf("\n################################################# STRLCAT ###\n");
	#define BUFFER_SIZE_STRLCAT 100
	#define TO_COPY_STRLCAT 10
	char *src_strlcat = "abcdefgh";

	char dst_strlcat[BUFFER_SIZE_STRLCAT] = "start";
	char dst_strlcat_real[BUFFER_SIZE_STRLCAT] = "start";

	size_t amount_strlcat = ft_strlcat(dst_strlcat, src_strlcat, TO_COPY_STRLCAT);
	printf("-> %zu -> '%s'", amount_strlcat, dst_strlcat);

	printf("\n###################### STRLCAT REAL ###\n");

	size_t amount_strlcat_real = strlcat(dst_strlcat_real, src_strlcat, TO_COPY_STRLCAT);
	printf("-> %zu -> '%s'", amount_strlcat_real, dst_strlcat_real);

	printf("\n################################################# TOUPPER ###\n");
	printf("a -> %c\n", ft_toupper('a'));
	printf("x -> %c\n", ft_toupper('x'));
	printf("A -> %c\n", ft_toupper('A'));
	printf("X -> %c\n", ft_toupper('X'));
	printf("2 -> %c\n", ft_toupper('2'));

	printf("\n################################################# TOLOWER ###\n");
	printf("a -> %c\n", ft_tolower('a'));
	printf("x -> %c\n", ft_tolower('x'));
	printf("A -> %c\n", ft_tolower('A'));
	printf("X -> %c\n", ft_tolower('X'));
	printf("2 -> %c\n", ft_tolower('2'));

	printf("\n################################################## STRCHR ###\n");
	char *str_strchr = "wind hello world";

	printf("\n##### MINE #################### REAL #############\n");
	printf("     '%s'                     '%s'\n", ft_strchr(str_strchr, 'w'), strchr(str_strchr, 'w'));
	printf("     '%s'                     '%s'\n", ft_strchr(str_strchr, 'o'), strchr(str_strchr, 'o'));
	printf("     '%s'                     '%s'\n", ft_strchr(str_strchr, 'U'), strchr(str_strchr, 'U'));
	printf("     '%s'                     '%s'\n", ft_strchr("", '\0'), strchr("", '\0'));
	printf("     '%s'                     '%s'\n", ft_strchr("aaaa", '\0'), strchr("aaaa", '\0'));

	printf("\n################################################# STRRCHR ###\n");
	char *str_strrchr = "wind hello world";

	printf("\n##### MINE #################### REAL #############\n");
	printf("     '%s'                     '%s'\n", ft_strrchr(str_strrchr, 'w'), strrchr(str_strrchr, 'w'));
	printf("     '%s'                     '%s'\n", ft_strrchr(str_strrchr, 'o'), strrchr(str_strrchr, 'o'));
	printf("     '%s'                     '%s'\n", ft_strrchr(str_strrchr, 'U'), strrchr(str_strrchr, 'U'));
	printf("     '%s'                     '%s'\n", ft_strrchr("", '\0'), strrchr("", '\0'));
	printf("     '%s'                     '%s'\n", ft_strrchr("aaaa", '\0'), strrchr("aaaa", '\0'));

	printf("\n################################################# STRNCMP ###\n");
	size_t n_strncmp = 200;

	printf("\n### MINE ###### REAL #############\n");
	printf("   '%d'           '%d'\n", ft_strncmp("hello", "hello", n_strncmp), strncmp("hello", "hello", n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("hello", "hello\n", n_strncmp), strncmp("hello", "hello\n", n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("hello", "helloa", n_strncmp), strncmp("hello", "helloa", n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("aab", "aaa",     n_strncmp), strncmp("aab", "aaa",     n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("aab", "",        n_strncmp), strncmp("aab", "",        n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("", "bbb",        n_strncmp), strncmp("", "bbb",        n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("", "",           n_strncmp), strncmp("", "",           n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("", "",           n_strncmp), strncmp("", "",           n_strncmp));

	printf("\n################################################## MEMCHR ###\n");
	char *tab_memchr = "abcdefghijkl";
	int tab2_memchr[] = {0, 1, 2, 3, 0};

	printf("\n####################### MEMCHR REAL ###\n");

	printf("\n### MINE ###### REAL #############\n");
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab_memchr, 'e', 5), (char *)memchr((void *)tab_memchr, 'e', 5));
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab_memchr, 'k', 5), (char *)memchr((void *)tab_memchr, 'k', 5));
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab_memchr, 'k', 100), (char *)memchr((void *)tab_memchr, 'k', 100));
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab_memchr, '_', 100), (char *)memchr((void *)tab_memchr, '_', 100));
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab_memchr, 'a', 0), (char *)memchr((void *)tab_memchr, 'a', 0));
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)"", 'a', 0), (char *)memchr((void *)"", 'a', 0));

	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab2_memchr, 'a', -1), (char *)memchr((void *)tab2_memchr, 'a', -1));
	// printf("'%d'             '%d' \n", (int)ft_memchr((void *)tab2_memchr, 3, 100), (int)memchr((void *)tab2_memchr, 3, 100));

	printf("\n################################################# MEMCMP ###\n");
	size_t n_memcmp = 200;

	printf("\n### MINE ###### REAL #############\n");
	printf("   '%d'           '%d'\n", ft_memcmp("hello", "hello", n_memcmp), memcmp("hello", "hello", n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("hello", "hello\n", n_memcmp), memcmp("hello", "hello\n", n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("hello", "helloa", n_memcmp), memcmp("hello", "helloa", n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("aab", "aaa",     n_memcmp), memcmp("aab", "aaa",     n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("aab", "",        n_memcmp), memcmp("aab", "",        n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("", "bbb",        n_memcmp), memcmp("", "bbb",        n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("", "",           n_memcmp), memcmp("", "",           n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("", "",           n_memcmp), memcmp("", "",           n_memcmp));

	return 0;
}
