/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:47:37 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/19 10:19:38 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putchar('-', count);
		ft_putchar('2', count);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-', count);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
	else
	{
		ft_putchar(n + 48, count);
	}
}

void	ft_unsputnbr(unsigned int n, int *count)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
	else
	{
		ft_putchar(n + 48, count);
	}
}
