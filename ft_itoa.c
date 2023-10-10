/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:46:51 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/10 15:32:44 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	alocsize(int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*toret;
	int			i;

	i = alocsize(n);
	if(n < 0)
	{
		if (!(toret = ft_calloc(alocsize(n) + 2, sizeof(char))))
			return (NULL);
		toret[0] = '-';
	}
	else if (n > 0)
		if (!(toret = ft_calloc(alocsize(n) + 1, sizeof(char))))
			return (NULL);
	if(n == 0)
		toret = ft_strdup("0");
	while(n != 0)
	{
		if(n < 0)
			toret[i] = ((n % 10) * -1) + 48;
		else
			toret[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (toret);
}
//int main()
//{
//	int n = 0;
//	char *string;
//	string = ft_itoa(n);
//	printf("%s\n", string);
//}
