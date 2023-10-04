/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:06:40 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/04 12:15:56 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *tosrc;
	unsigned char *todest;
	size_t i;

	i = 0;
	tosrc = (unsigned char *)src;
	todest = (unsigned char *)dest;
	if(src < dest)
	{
		while(n > 0)
		{
			todest[n] = tosrc[n];
			n--;
		}
	}
	else
	{
		while(i < n)
		{
			todest[i] = tosrc[i];
			i++;
		}
	}
	return (dest);
}
// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hello World!";
// 	char str2[] = "Hello World!";
// 	ft_memcpy(str, str2, 5);
// 	printf("%s\n", str);
// 	return (0);
// }
