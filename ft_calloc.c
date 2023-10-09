#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char    *ptr;
	size_t			sizetotal;
	size_t				i;

	i = 0;
	sizetotal = nmemb * size;
    ptr = (unsigned char *)malloc(sizetotal);
	if(ptr == NULL)
		return (NULL);
	while (i < sizetotal)
		ptr[i++] = 0;
    return (ptr);
}
