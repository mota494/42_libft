#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/* MAKEFILE */
/*
exec:
	cc main.c $(SRC)
*/

void	yellow()
{
	printf("\033[35;2m"); //teal
	//printf("\033[33;5m"); //blinking
	//printf("\033[1;33m"); //normal
}

void red ()
{
	printf("\033[1;31m");
}

void	green()
{
	printf("\033[0;32m");
}

void	reset()
{
	printf("\033[0m");
}

void	test_passed(int i)
{
	green();
	printf("Test %d: Passed \n", i);
	reset();
}

void	test_not(int i)
{
	red();
	printf("Test %d: Not Passed \n", i);
	reset();
}

void	test_atoi(char *test_atoi_null,char *test_atoi_allnum,char *test_atoi_num_let)
{
	yellow();
	printf("[--atoi--]\n");
	reset();
	if (atoi(test_atoi_allnum) == ft_atoi(test_atoi_allnum))
		test_passed(1);
	else
		test_not(1);
	if (atoi(test_atoi_null) == ft_atoi(test_atoi_null))
		test_passed(2);
	else
		test_not(2);
	if (atoi(test_atoi_num_let) == ft_atoi(test_atoi_num_let))
		test_passed(3);
	else
		test_not(3);
	if (ft_atoi("--5") == 0)
		test_passed(4);
	else
		test_not(4);
	if (ft_atoi("-5") == -5)
		test_passed(5);
	else
		test_not(5);
	if (ft_atoi("+0") == 0)
		test_passed(6);
	else
		test_not(6);
}

void	test_bzero()
{
	char test_bzero_cor[10] = "1234567890";
	char test_bzero_cor_cop[10] = "1234567890";
	char *test_bzero_er = "12345";
	char *test_bzero_er_cop = "12345";

	yellow();
	printf("[--bzero--]\n");
	reset();
	bzero(test_bzero_cor_cop, 5);
	ft_bzero(test_bzero_cor, 5);
	if (strcmp(test_bzero_cor, test_bzero_cor_cop) == 0)
		test_passed(1);
	else
		test_not(1);
	bzero(test_bzero_er, 0);
	ft_bzero(test_bzero_er, 0);
	if (strcmp(test_bzero_er_cop, test_bzero_er) == 0)
		test_passed(2);
	else
		test_not(2);

}

void	test_calloc()
{
	char	*test_ft_calloc = ft_calloc(5, sizeof(char));
	char	*test_calloc = (char *)calloc(5, sizeof(char));
	char	*error_ft = ft_calloc(0, sizeof(char));
	char	*error = (char *)calloc(0, sizeof(char));

	yellow();
	printf("[--calloc--]\n");
	reset();
	if (strcmp(test_calloc, test_ft_calloc) == 0)
		test_passed(1);
	else
		test_not(1);
	if (error_ft != NULL)
		test_passed(2);
	else
		test_not(2);
	free(error_ft);
	free(error);
	free(test_ft_calloc);
	free(test_calloc);
}

void	test_isalnum()
{
	char test_isalnum_er = '?';
	char test_isalnum_empt;
	char test_isalnum_cor = '5';
	char test_isalnum_cor_2 = 'a';

	yellow();
	printf("[--isalnum--]\n");
	reset();
	if (isalnum(test_isalnum_er) == ft_isalnum(test_isalnum_er))
		test_passed(1);
	else
		test_not(1);
	if (1 == ft_isalnum(test_isalnum_cor))
		test_passed(2);
	else
		test_not(2);
	if (1 == ft_isalnum(test_isalnum_cor_2))
		test_passed(3);
	else
		test_not(3);
}

void	test_isalpha()
{
	char	empt;

	yellow();
	printf("[--isalpha--]\n");
	reset();
	if (ft_isalpha('+') == 0)
		test_passed(1);
	else
		test_not(1);
	if (ft_isalpha('A') != 0)
		test_passed(2);
	else
		test_not(2);
	if (ft_isalpha('a') != 0)
		test_passed(3);
	else
		test_passed(3);
}

void	printf_func(char *func)
{
	yellow();
	printf("[--%s--]\n", func);
	reset();
}

void	test_isascii()
{
	printf_func("isascii");
	
	if (ft_isascii(10) == 1)
		test_passed(1);
	else
		test_not(1);
	if (ft_isascii(129) == 0)
		test_passed(2);
	else
		test_not(2);
}

void	test_isdigit()
{
	printf_func("isdigit");
	if (ft_isdigit('3') == 1)
		test_passed(1);
	else
		test_not(1);
	if (ft_isdigit('b') == 0)
		test_passed(2);
	else
		test_not(2);
}

void	test_isprint()
{
	printf_func("isprint");
	if (ft_isprint(0) == 0)
		test_passed(1);
	else
		test_not(1);
	if (ft_isprint(51) == 1)
		test_passed(2);
	else
		test_not(2);
	if (ft_isprint(127) == 0)
		test_passed(3);
	else
		test_not(3);
}

void	test_itoa()
{
	char	*tofre;
	printf_func("itoa");
	tofre = ft_itoa(-91);
	if (strcmp(tofre, "-91") == 0)
		test_passed(1);
	else
		test_not(1);
	free(tofre);
	tofre = ft_itoa(2147483647);
	if (strcmp(tofre, "2147483647") == 0)
		test_passed(2);
	else
		test_not(2);
	free(tofre);
	tofre = ft_itoa(NULL);
	if (strcmp(tofre, "0") == 0)
		test_passed(3);
	else
		test_not(3);
	free(tofre);
	tofre = ft_itoa(-2147483648);
	if (strcmp(tofre, "-2147483648") == 0)
		test_passed(4);
	else
		test_passed(4);
	free(tofre);
}

int main(int argc, char **argv)
{
	char	test_atoi_null[20] = "avca4930";
	char	test_atoi_allnum[20] = "123456789";
	char	test_atoi_num_let[20] = "12ab23";
	test_atoi(test_atoi_null, test_atoi_allnum, test_atoi_num_let);
	test_bzero();
	test_calloc();
	test_isalnum();
	test_isalpha();
	test_isascii();
	test_isdigit();
	test_isprint();
	test_itoa();
}
