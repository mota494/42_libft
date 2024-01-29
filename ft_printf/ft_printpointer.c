/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:38:04 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/19 10:19:11 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointerputnbr(unsigned long n, char *hex, int *count);
void	ft_hexdefine(unsigned long n, int *count);

void	ft_printpointer(unsigned long l, int *count)
{
	if (!l)
	{
		write(1, "(nil)", 5);
		*count += 5;
	}
	else
	{
		write (1, "0x", 2);
		*count += 2;
		ft_hexdefine(l, count);
	}
}

void	ft_hexdefine(unsigned long n, int *count)
{
	ft_pointerputnbr(n, "0123456789abcdef", count);
}

void	ft_pointerputnbr(unsigned long n, char *hex, int *count)
{
	if (n >= 16)
	{
		ft_pointerputnbr(n / 16, hex, count);
		ft_pointerputnbr(n % 16, hex, count);
	}
	else
		ft_putchar(hex[n], count);
}
