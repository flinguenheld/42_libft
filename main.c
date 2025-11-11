/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flinguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:31:17 by flinguen          #+#    #+#             */
/*   Updated: 2025/11/10 22:53:25 by flinguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stddef.h>
#include <stdint.h>
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
	#define TO_COPY_STRLCAT 0
	// char *src_strlcat = "abcdefgh";
	char *src_strlcat = "AAAAAAAAA";

	char dst_strlcat[BUFFER_SIZE_STRLCAT] = "start";
	char dst_strlcat_real[BUFFER_SIZE_STRLCAT] = "start";

	size_t amount_strlcat = ft_strlcat(dst_strlcat, src_strlcat, TO_COPY_STRLCAT);
	printf("-> %zu -> '%s'", amount_strlcat, dst_strlcat);

	printf("\n###################### STRLCAT REAL ###\n");

	size_t amount_strlcat_real = strlcat(dst_strlcat_real, src_strlcat, TO_COPY_STRLCAT);
	printf("-> %zu -> '%s'", amount_strlcat_real, dst_strlcat_real);

	printf("\n##### MINE #################### REAL #############\n");

	char * strlcat_000 = NULL;
	size_t strlcat_000_value = ft_strlcat(strlcat_000, "aaaaa", 0);
	char * strlcat_000_real = NULL;
	size_t strlcat_000_real_value = strlcat(strlcat_000_real, "aaaaa", 0);
	printf("000 -> %zu '%s'          %zu '%s'\n", strlcat_000_value, strlcat_000, strlcat_000_real_value, strlcat_000_real);

	char strlcat_break0_001[100];
	char strlcat_001[10] = "start";
	size_t strlcat_001_value = ft_strlcat(strlcat_001, "bbb", 10);
	char strlcat_break1_001[100];
	char strlcat_001_real[10] = "start";
	size_t strlcat_001_real_value = strlcat(strlcat_001_real, "bbb", 10);
	printf("001 -> %zu '%s'          %zu '%s'\n", strlcat_001_value, strlcat_001, strlcat_001_real_value, strlcat_001_real);

	char strlcat_break0_002[100];
	char strlcat_002[10] = "start";
	size_t strlcat_002_value = ft_strlcat(strlcat_002, "", 10);
	char strlcat_break1_002[100];
	char strlcat_002_real[10] = "start";
	size_t strlcat_002_real_value = strlcat(strlcat_002_real, "", 10);
	printf("002 -> %zu '%s'          %zu '%s'\n", strlcat_002_value, strlcat_002, strlcat_002_real_value, strlcat_002_real);

	char strlcat_break0_003[100];
	char strlcat_003[10] = "";
	size_t strlcat_003_value = ft_strlcat(strlcat_003, "bbb", 10);
	char strlcat_break1_003[100];
	char strlcat_003_real[10] = "";
	size_t strlcat_003_real_value = strlcat(strlcat_003_real, "bbb", 10);
	printf("003 -> %zu '%s'          %zu '%s'\n", strlcat_003_value, strlcat_003, strlcat_003_real_value, strlcat_003_real);

	char strlcat_break0_004[100];
	char strlcat_004[0];
	size_t strlcat_004_value = ft_strlcat(strlcat_004, "bbb", 10);
	char strlcat_break1_004[100];
	char strlcat_004_real[0];
	size_t strlcat_004_real_value = strlcat(strlcat_004_real, "bbb", 10);
	printf("004 -> %zu '%s'          %zu '%s'\n", strlcat_004_value, strlcat_004, strlcat_004_real_value, strlcat_004_real);

	char strlcat_break0_005[100];
	char strlcat_005[50] = "start";
	size_t strlcat_005_value = ft_strlcat(strlcat_005, "bbb", 0);
	char strlcat_break1_005[100];
	char strlcat_005_real[50] = "start";
	size_t strlcat_005_real_value = strlcat(strlcat_005_real, "bbb", 0);
	printf("005 -> %zu '%s'          %zu '%s'\n", strlcat_005_value, strlcat_005, strlcat_005_real_value, strlcat_005_real);

	// Has to fail with two NULL
	// size_t strlcat_006_value = ft_strlcat(NULL, NULL, 3);
	// size_t strlcat_006_real_value = strlcat(NULL, NULL, 3);

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
	printf("     '%s'                     '%s'\n", ft_strchr(str_strchr, 'w'),  strchr(str_strchr, 'w'));
	printf("     '%s'                     '%s'\n", ft_strchr(str_strchr, 'o'),  strchr(str_strchr, 'o'));
	printf("     '%s'                     '%s'\n", ft_strchr(str_strchr, 'U'),  strchr(str_strchr, 'U'));
	printf("     '%s'                     '%s'\n", ft_strchr("",         '\0'), strchr(""        , '\0'));
	printf("     '%s'                     '%s'\n", ft_strchr("aaaa",     '\0'), strchr("aaaa"    , '\0'));
	printf("     '%s'                     '%s'\n", ft_strchr("tripouille"    , 't' + 256), strchr("tripouille"    , 't' + 256));

	printf("\n################################################# STRRCHR ###\n");
	// char *str_strrchr = "wind hello world";
	char *str_strrchr = "0123456789";

	printf("\n##### MINE #################### REAL #############\n");
	printf("     '%s'                     '%s'\n", ft_strrchr(str_strrchr, 'w'),  strrchr(str_strrchr, 'w'));
	printf("     '%s'                     '%s'\n", ft_strrchr(str_strrchr, 'o'),  strrchr(str_strrchr, 'o'));
	printf("     '%s'                     '%s'\n", ft_strrchr(str_strrchr, 'U'),  strrchr(str_strrchr, 'U'));
	printf("     '%s'                     '%s'\n", ft_strrchr("",          '\0'), strrchr("",          '\0'));
	printf("     '%s'                     '%s'\n", ft_strrchr("aaaa",      '\0'), strrchr("aaaa",      '\0'));
	printf("     '%s'                     '%s'\n", ft_strrchr("a",         '\0'), strrchr("a",         '\0'));

	printf("\n################################################# STRNCMP ###\n");
	size_t n_strncmp = 200;

	printf("\n### MINE ###### REAL #############\n");
	printf("   '%d'           '%d'\n", ft_strncmp("hello", "hello",   n_strncmp), strncmp("hello", "hello",   n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("hello", "hello\n", n_strncmp), strncmp("hello", "hello\n", n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("hello", "helloa",  n_strncmp), strncmp("hello", "helloa",  n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("aab", "aaa",       n_strncmp), strncmp("aab", "aaa",       n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("aab", "",          n_strncmp), strncmp("aab", "",          n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("", "bbb",          n_strncmp), strncmp("", "bbb",          n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("", "",             n_strncmp), strncmp("", "",             n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("", "",             n_strncmp), strncmp("", "",             n_strncmp));
	printf("   '%d'           '%d'\n", ft_strncmp("\200", "\0",       n_strncmp), strncmp("\200", "\0",       n_strncmp));

	printf("\n################################################## MEMCHR ###\n");
	char *tab_memchr = "abcdefghijkl";
	int tab2_memchr[] = {0, 1, 2, 3, 0};

	printf("\n####################### MEMCHR REAL ###\n");

	printf("\n### MINE ###### REAL #############\n");
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab_memchr , 'e', 5),   (char *)memchr((void *)tab_memchr,  'e', 5));
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab_memchr , 'k', 5),   (char *)memchr((void *)tab_memchr,  'k', 5));
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab_memchr , 'k', 100), (char *)memchr((void *)tab_memchr,  'k', 100));
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab_memchr , '_', 100), (char *)memchr((void *)tab_memchr,  '_', 100));
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab_memchr , 'a', 0),   (char *)memchr((void *)tab_memchr,  'a', 0));
	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)""         , 'a', 0),   (char *)memchr((void *)"",          'a', 0));

	printf("'%s'             '%s' \n", (char *)ft_memchr((void *)tab2_memchr, 'a', -1),  (char *)memchr((void *)tab2_memchr, 'a', -1));
	// printf("'%d'             '%d' \n", (int)ft_memchr((void *)tab2_memchr, 3, 100),   (int)memchr((void *)tab2_memchr, 3, 100));

	printf("\n################################################# MEMCMP ###\n");
	size_t n_memcmp = 200;

	printf("\n### MINE ###### REAL #############\n");
	printf("   '%d'           '%d'\n", ft_memcmp("hello", "hello",   n_memcmp), memcmp("hello", "hello",   n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("hello", "hello\n", n_memcmp), memcmp("hello", "hello\n", n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("hello", "helloa",  n_memcmp), memcmp("hello", "helloa",  n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("aab",   "aaa",     n_memcmp), memcmp("aab",   "aaa",     n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("aab",   "",        n_memcmp), memcmp("aab",   "",        n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("",      "bbb",     n_memcmp), memcmp("",      "bbb",     n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("",      "",        n_memcmp), memcmp("",      "",        n_memcmp));
	printf("   '%d'           '%d'\n", ft_memcmp("",      "",        n_memcmp), memcmp("",      "",        n_memcmp));

	printf("\n################################################# STRNSTR ###\n");
	// size_t len_strnstr = 14;
	// size_t len_strnstr = 15;
	size_t len_strnstr = 0;

	printf("\n### MINE ###### REAL #############\n");
	printf("   '%s'           '%s'\n", ft_strnstr("hello",              "hello",     len_strnstr), strnstr("hello",              "hello",     len_strnstr));
	printf("   '%s'           '%s'\n", ft_strnstr("hello",              "lo",        len_strnstr), strnstr("hello",              "lo",        len_strnstr));
	printf("   '%s'           '%s'\n", ft_strnstr("hello",              "helloa",    len_strnstr), strnstr("hello",              "helloa",    len_strnstr));
	printf("   '%s'           '%s'\n", ft_strnstr("hellohello",         "hello",     len_strnstr), strnstr("hellohello",         "hello",     len_strnstr));
	printf("   '%s'           '%s'\n", ft_strnstr("hellohello",         "lo",        len_strnstr), strnstr("hellohello",         "lo",        len_strnstr));
	printf("   '%s'           '%s'\n", ft_strnstr("hellohello",         "",          len_strnstr), strnstr("hellohello",         "",          len_strnstr));
	printf("   '%s'           '%s'\n", ft_strnstr("",                   "",          len_strnstr), strnstr("",                   "",          len_strnstr));
	printf("   '%s'           '%s'\n", ft_strnstr("",                   "aa",        len_strnstr), strnstr("",                   "aa",        len_strnstr));
	printf("   '%s'           '%s'\n", ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", len_strnstr), strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", len_strnstr));

	printf("\n################################################# MEMCMP ###\n");
	printf("\n### MINE ###### REAL #############\n");
	printf("   '%d'           '%d'\n", ft_atoi("hello"),           atoi("hello"));
	printf("   '%d'           '%d'\n", ft_atoi("0"),               atoi("0"));
	printf("   '%d'           '%d'\n", ft_atoi("1"),               atoi("1"));
	printf("   '%d'           '%d'\n", ft_atoi("-1"),              atoi("-1"));
	printf("   '%d'           '%d'\n", ft_atoi("--1"),             atoi("--1"));
	printf("   '%d'           '%d'\n", ft_atoi("+1"),              atoi("+1"));
	printf("   '%d'           '%d'\n", ft_atoi("+-1"),             atoi("+-1"));
	printf("   '%d'           '%d'\n", ft_atoi("123"),             atoi("123"));
	printf("   '%d'           '%d'\n", ft_atoi("-123"),            atoi("-123"));
	printf("   '%d'           '%d'\n", ft_atoi("-123a33aaa"),      atoi("-123a33aaa"));
	printf("   '%d'           '%d'\n", ft_atoi("a-123"),           atoi("a-123"));
	printf("   '%d'           '%d'\n", ft_atoi("    -123"),        atoi("    -123"));
	printf("   '%d'           '%d'\n", ft_atoi("  \t\n  -123"),    atoi("  \t\n  -123"));
	printf("   '%d'           '%d'\n", ft_atoi("  \t\n  - 123"),   atoi("  \t\n  - 123"));
	printf("   '%d'           '%d'\n", ft_atoi("2147483647"),      atoi("2147483647"));
	printf("   '%d'           '%d'\n", ft_atoi("214748364800000"), atoi("214748364800000"));
	printf("   '%d'           '%d'\n", ft_atoi("-2147483648"),     atoi("-2147483648"));
	printf("   '%d'           '%d'\n", ft_atoi("-2147483649"),     atoi("-2147483649"));

	printf("\n################################################## CALLOC ###\n");
	size_t len_calloc = 1;
	size_t nb_elem_calloc = 3;

	// Size max has to return a ptn NULL --
	// size_t len_calloc = SIZE_MAX;
	// size_t nb_elem_calloc = SIZE_MAX;

	int *ptr_calloc = ft_calloc(nb_elem_calloc, len_calloc);
	if (ptr_calloc)
	{
		printf("first: '%c'\n", *ptr_calloc);
		for (size_t i = 0; i < 10; i++)
			printf("'%c' ", (char)ptr_calloc[i]);
	}
	else
		printf("ptr null");
	// printf("\n");
	free(ptr_calloc);

	printf("\n####################### CALLOC REAL ###\n");
	int *ptr_calloc_real = calloc(nb_elem_calloc, len_calloc);
	if (ptr_calloc_real)
	{

		printf("first: '%c'\n", *ptr_calloc_real);
		for (size_t i = 0; i < 10; i++)
			printf("'%c' ", (char)ptr_calloc_real[i]);
	}
	else
		printf("ptr null");
	free(ptr_calloc_real);

	printf("\n################################################## STRDUP ###\n");
	char *to_copy_strdup = "abcde fgh";
	// char *to_copy_strdup = "";
	char *res_strdup = ft_strdup(to_copy_strdup);
	char *res_strdup_real = strdup(to_copy_strdup);;

	printf("\n### MINE ###### REAL #############\n");
	printf("   '%s'           '%s'\n", res_strdup, res_strdup_real);

	free(res_strdup);
	free(res_strdup_real);

	printf("\n################################################## SUBSTR ###\n");
	char *to_copy_substr = "abcde";
	unsigned int start_substr = 0;
	size_t len_substr = 5;

	// char *to_copy_substr = "01234";
	// unsigned int start_substr = 10;
	// size_t len_substr = 10;

	char *sub_substr = ft_substr(to_copy_substr, start_substr, len_substr);
	printf("-> '%s'", sub_substr);
	free(sub_substr);

	printf("\n################################################# STRJOIN ###\n");
	char *src1_strjoin = "hello ";
	char *src2_strjoin = "world";

	char *dst_strjoin = ft_strjoin(src1_strjoin, src2_strjoin);
	printf("-> '%s'", dst_strjoin);
	free(dst_strjoin);

	printf("\n################################################# STRTRIM ###\n");
	// char *src_strtrim = "";
	// char *src_strtrim = "abchelloabc";
	// char *src_strtrim = "abcabcccc-caaabbbb";
	char *src_strtrim = "abc-hel-abc-lo-abc";
	char *set_strtrim = "abc";
	char *dst_strtrim = ft_strtrim(src_strtrim, set_strtrim);

	printf("'%s'  ->  '%s'", src_strtrim, dst_strtrim);
	free(dst_strtrim);

	printf("\n################################################### SPLIT ###\n");
	// char * * tab = ft_split("  tripouille  42  ", ' ');
	// /* 1 */ mcheck(tab, sizeof(char *) * 3);

	// char *src_split = "Hello   to you";
	char *src_split = "  tripouille 42 ";
	char c_split = ' ';
	// char c_split = '\0';
	char **dst_split = ft_split(src_split, c_split);

	char **start_split = dst_split;
	while (*dst_split != NULL)
	{
		printf("'%s'\n", *dst_split);
		free(*dst_split);
		dst_split++;
	}
	free(start_split);

	printf("\n#################################################### ITOA ###\n");

	for (int i = -20000; i < 20000; i += 333)
	{
		if (ft_atoi(ft_itoa(i)) == i)
			printf("%d -> OK\n", i);
		else
			printf("%d -> NOK <--------------------------------------------\n", i);
	}
	
	printf("min: %d -> %d\n", INT32_MIN, ft_atoi(ft_itoa(INT32_MIN)));
	printf("max: %d -> %d\n", INT32_MAX, ft_atoi(ft_itoa(INT32_MAX)));

	printf("\n#################################################### ###\n");
	int a = -5;
	unsigned int b = (unsigned int)a;
	b++;
	b++;

	printf("a: %d -> %u\n", a, b);

	
	return 0;
}
