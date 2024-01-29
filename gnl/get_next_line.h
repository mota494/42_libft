/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:51:26 by mloureir          #+#    #+#             */
/*   Updated: 2023/11/06 11:46:54 by mloureir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
//get_next_line
char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *toret);
void	ft_cleanbuffer(char *buffer);
char	*ft_treat_line(char *toret, int bytesread);
int		ft_is_empty(char *buffer);
//get_next_line_utils
int		ft_hasnl(char *str);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *buffer, char *pstr);
char	*ft_buffer_to_str(char *buffer, int bytesread);

#endif
