/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:59:16 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/19 10:19:46 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		*count += 6;
	}
	else
	{
		while (s[i] != '\0')
		{
			ft_putchar(s[i], count);
			i++;
		}
	}
}
