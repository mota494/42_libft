/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:50:50 by mloureir          #+#    #+#             */
/*   Updated: 2023/11/09 10:06:33 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_cleanbuffer(char *buffer)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (buffer[i] != '\n' && i < BUFFER_SIZE)
		i++;
	if (buffer[i] == '\n')
		i++;
	while (i < BUFFER_SIZE)
	{
		buffer[j] = buffer[i];
		i++;
		j++;
	}
	while (j < BUFFER_SIZE)
	{
		buffer[j] = '\0';
		j++;
	}
}

char	*ft_treat_line(char *toret, int bytesread)
{
	if (ft_strlen(toret) && bytesread != -1)
		return (toret);
	free(toret);
	return (NULL);
}

int	ft_is_empty(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] == 0 && i < BUFFER_SIZE)
		i++;
	if (i == BUFFER_SIZE)
		return (1);
	return (0);
}

char	*ft_read_line(int fd, char *toret)
{
	static char	buffer[BUFFER_SIZE];
	char		*next;
	int			bytesread;

	bytesread = 0;
	while (buffer[bytesread] != '\0' && bytesread < BUFFER_SIZE)
		bytesread++;
	while (ft_hasnl(toret) == 0)
	{
		if (ft_is_empty(buffer))
			bytesread = read(fd, buffer, BUFFER_SIZE);
		if (bytesread <= 0)
			break ;
		next = ft_buffer_to_str(buffer, bytesread);
		if (!next)
			break ;
		toret = ft_strjoin(toret, next);
		if (!toret)
			return (NULL);
		free(next);
		ft_cleanbuffer(buffer);
	}
	return (ft_treat_line(toret, bytesread));
}

char	*get_next_line(int fd)
{
	char	*toret;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	toret = malloc(1);
	if (!toret)
		return (0);
	toret[0] = '\0';
	return (ft_read_line(fd, toret));
}

/*int main(void)
{
	int fd;
	char *str;
	fd = open("get_next_line.h", O_RDONLY);
	while(str = get_next_line(fd))
	{
		printf("%s", str);
		free(str);
	}
	return (0);
}*/
