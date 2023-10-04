/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:35:44 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/04 11:40:30 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n){
	const unsigned char *tosrc;
	unsigned char *todest;

	tosrc = src;
	todest = dest;
	(void)tosrc;
	(void)todest;
	(void)n;
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hello World!";
// 	char str2[] = "Hello World!";
// 	ft_memmove(str, str2, 5);
// 	printf("%s\n", str);
// 	return (0);
//	}
