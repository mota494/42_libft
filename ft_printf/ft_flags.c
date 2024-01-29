/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:44:09 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/19 10:10:18 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	transport(const char *str, int strpos, va_list strings, int *count);

void	ft_flags(const char *str, va_list strings, int *count)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			transport(str, i, strings, count);
		}
		else
		{
			write(1, &str[i], 1);
			*count += 1;
		}
		i++;
	}
}

void	transport(const char *str, int strpos, va_list strings, int *count)
{
	if (str[strpos] == 'd' || str[strpos] == 'i' || str[strpos] == 'u')
		ft_printint(str, strpos, strings, count);
	if (str[strpos] == 'c')
		ft_putchar(va_arg(strings, int), count);
	if (str[strpos] == '%')
		ft_putchar('%', count);
	if (str[strpos] == 's')
		ft_putstr(va_arg(strings, char *), count);
	if (str[strpos] == 'x' || str[strpos] == 'X')
		ft_hexamain(str, strpos, strings, count);
	if (str[strpos] == 'p')
		ft_printpointer(va_arg(strings, unsigned long), count);
}
