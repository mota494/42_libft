/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:51:07 by mloureir          #+#    #+#             */
/*   Updated: 2023/11/06 11:46:30 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_hasnl(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *toret, char *next)
{
	char	*newstring;
	size_t	i;

	i = 0;
	newstring = malloc(ft_strlen(toret) + ft_strlen(next) + 1);
	if (!newstring)
	{
		free(toret);
		free(next);
		return (NULL);
	}
	while (toret[i])
	{
		newstring[i] = toret[i];
		i++;
	}
	while (*next)
	{
		newstring[i] = *next;
		next++;
		i++;
	}
	free(toret);
	newstring[i] = '\0';
	return (newstring);
}

char	*ft_buffer_to_str(char *buffer, int bytesread)
{
	int		i;
	char	*newstr;

	i = 0;
	while (buffer[i] != '\n' && i < bytesread)
		i++;
	if (buffer[i] == '\n')
		i++;
	newstr = malloc(i + 1);
	if (!newstr)
		return (0);
	i = 0;
	while (buffer[i] != '\n' && i < bytesread)
	{
		newstr[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		newstr[i++] = '\n';
	newstr[i] = '\0';
	return (newstr);
}
