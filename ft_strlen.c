/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:49:57 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/04 11:26:46 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hello World!";
// 	printf("%zu\n", ft_strlen(str));
// 	return (0);
// }
