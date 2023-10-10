/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:32:33 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/10 12:33:35 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	count;
	int	i;
	int	check;

	count = 0;
	i = 0;
	check = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && check == 0)
		{
			check = 1;
			count++;
		}
		else if (s[i] == c && check == 1)
			check = 0;
		i++;
	}
	return (count);
}

size_t	wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

char	**strclean(char **split, size_t wordc)
{
	size_t	i;

	i = 0;
	while (i < wordc)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}

char	**writestr(char const *s, char c, char **split, size_t wordc)
{
	size_t	count;
	int		i;
	int		j;

	i = 0;
	count = 0;
	while (count < wordc)
	{
		j = 0;
		while (s[i] == c && s[i])
			i++;
		split[count] = ft_calloc(wordlen(&s[i], c) + 1, sizeof(char));
		if (!split)
			strclean(split, wordc);
		while (s[i] != c && s[i])
		{
			split[count][j] = s[i];
			j++;
			i++;
		}
		count++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	wordc;

	wordc = wordcount(s, c);
	split = ft_calloc(wordc + 1, sizeof(char *));
	if (!split)
		return (0);
	if (wordc > 0)
		split = writestr(s, c, split, wordc);
	return (split);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	*str;
//	char	**arr;
//
//	str = "hello!";
//	arr = ft_split(str, ' ');
//	printf("%s", arr[0]);
//	str = "The cake is a lie!";
//	arr = ft_split(str, ' ');
//	printf("%s", arr[0]);
//	printf("%s", arr[1]);
//	printf("%s", arr[2]);
//	printf("%s", arr[3]);
//	printf("%s", arr[4]);
//	free(arr[0]);
//	free(arr[1]);
//	free(arr[2]);
//	free(arr[3]);
//	free(arr[4]);
//	free(arr);
//	return (0);
//}
