#include "libft.h"

char	*ft_strdup(const char *s, size_t n)
{
	char	*newstring;
	int	i;

	i = 0;
	newstring = malloc((sizeof(char) * n) + 1);
	if(*newstring == NULL)
		return (NULL);
	while(i < n)
	{
		newstring[i] = s[i];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char string[] = "Teste";
	int strl;

	strl = strlen(string);
	printf("%s\n", ft_strdup(string, strl));
	return (0);
}
