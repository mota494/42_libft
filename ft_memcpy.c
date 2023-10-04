/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:06:40 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/04 10:37:57 by mloureir         ###   ########.fr       */
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
	while(i < n)
	{
		todest[i] = tosrc[i];
		i++;
	}
	return (dest);
}

