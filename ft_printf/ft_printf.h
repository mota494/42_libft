/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfh.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:34:09 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/19 10:11:25 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_flags(const char *str, va_list strings, int *count);
void	ft_printint(const char *str, int strpos, va_list strings, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_hexamain(const char *str, int strpos, va_list strings, int *count);
void	ft_unsputnbr(unsigned int n, int *count);
void	ft_printpointer(unsigned long l, int *count);

#endif
