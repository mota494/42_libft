/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:29:40 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/09 10:43:07 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	strl;
	char	*toret;

	i = 0;
	strl = ft_strlen(s);
	if(len >= strl)
		len = strl - start;
	if (start >= strl)
	{
		toret = (char *)ft_calloc(1, sizeof(char));
		if (!toret)
			return (NULL);
		return (toret);
	}
	toret = (char *)ft_calloc(len + 1, sizeof(char));
	if (!toret)
		return (NULL);
	while (i < len)
	{
		toret[i] = s[start + i];
		i++;
	}
	return (toret);
}
// #include <stdio.h>
// int main()
// {
// 	char *string = "LOREM_IPSUM";
// 	char *temp = ft_substr(string, 6, 5);
// 	printf("%s\n", temp);

// 	return (0);
// }
