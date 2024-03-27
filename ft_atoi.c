/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:43:40 by mloureir          #+#    #+#             */
/*   Updated: 2023/10/09 10:16:04 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	toret;
	int	index;
	int	pos;

	toret = 0;
	index = 0;
	pos = 1;
	while ((nptr[index] >= 9 && nptr[index] <= 13) || nptr[index] == 32)
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			pos = pos * -1;
		index++;
	}
	while (nptr[index] >= 48 && nptr[index] <= 57)
	{
		toret = toret * 10;
		toret = toret + (nptr[index] - 48);
		index++;
	}
	return (toret * pos);
}
