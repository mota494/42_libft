/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:35:44 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/04 10:39:33 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n){
	const unsigned char *tosrc;
	unsigned char *todest;

	tosrc = src;
	todest = dest;
	if(todest < tosrc)
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
	else
	{
		while(n > 0)
		{
			todest[n] = tosrc[n];
			n--;
		}
		return (dest);
	}
}
