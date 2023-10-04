#include <stdio.h>
#include "libft.h"

int main(void){
	char c = '5';
	int oascii = 980;
	char str[] = "LOREM_IPSUM";
	char str2[] = "IPSUM_LOREM";
	char strCPY[] = "LOREM_IPSUM";
	char str2CPY[] = "IPSUM_LOREM";
	char tozero[] = "domingo";
	char clean[20];

	printf("\x1B[35m========bzero========\e[0m\nString antes: %s\n", tozero);
	ft_bzero(tozero, 0);
	printf("String depois: %s\n\n", tozero);
	printf("\x1B[35m========isalnum========\e[0m\nInput: %c\nOutput: %d\n\n", c, ft_isalnum(c));
	printf("\x1B[35m========isalpha========\e[0m\nInput: %c\nOutput: %d\n\n", c, ft_isalpha(c));
	printf("\x1B[35m========isascii========\e[0m\nInput: %c\nOutput: %d\n\n", oascii, ft_isascii(oascii));
	printf("\x1B[35m========isdigit========\e[0m\nInput: %c\nOutput: %d\n\n", c, ft_isdigit(c));
	printf("\x1B[35m========isprint========\e[0m\nInput: %c\nOutput: %d\n\n", c, ft_isprint(c));
	printf("\x1B[35m========memcpy========\e[0m\nSource: %s\nDestination: %s\n", str, str2);
	ft_memcpy(str2, str, 5);
	printf("Output: %s\n\n", str2);
	printf("\x1B[35m========memmove========\e[0m\nSource: %s\nDestination: %s\n", strCPY, str2CPY);
	ft_memmove(str2CPY, strCPY, 5);
	printf("Output: %s\n\n", str2CPY);
	ft_memset(clean, 'M', 5);
	printf("\x1B[35m========memset========\e[0m\nOutput: %s\n\n", clean);
	printf("\x1B[35m========strlcpy========\e[0m\nSource: %s\nDestination: %s\nOutput: %zu\n\n", str, str2, ft_strlcpy());
	printf("\x1B[35m========strlen========\e[0m\nInput: %s\nOutput: %zu\n\n", str, ft_strlen(str));
	
	return (0);
}
