/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 20:39:55 by lramela           #+#    #+#             */
/*   Updated: 2020/01/20 10:03:00 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_find_newline(int fd_pos, char **tab)
{
	int	i;

	i = 0;
	while (tab[fd_pos][i] != '\n' && tab[fd_pos][i] != '\0')
		i++;
	return (i);
}

int		ft_new_line(int fd_pos, char **line, char **tab, int len)
{
	int		res;
	int		i;
	char	*ptr;

	i = ft_find_newline(fd_pos, tab);
	if (tab[fd_pos][i] == '\n')
	{
		*line = ft_strsub(tab[fd_pos], 0, i);
		ptr = ft_strdup(tab[fd_pos] + i + 1);
		ft_strdel(&tab[fd_pos]);
		tab[fd_pos] = ptr;
		if (tab[fd_pos][0] == '\0')
			ft_strdel(&tab[fd_pos]);
	}
	else if (tab[fd_pos][i] == '\0')
	{
		if (len == BUFF_SIZE)
		{
			res = get_next_line(fd_pos, line);
			return (res);
		}
		*line = ft_strdup(tab[fd_pos]);
		ft_strdel(&tab[fd_pos]);
	}
	return (1);
}

int		ft_read_line(int fd_pos, char *buf, char **tab)
{
	int		len;
	char	*ptr;

	if (tab[fd_pos] == NULL)
		tab[fd_pos] = ft_strnew(1);
	while ((len = read(fd_pos, buf, BUFF_SIZE)) > 0)
	{
		buf[len] = '\0';
		ptr = ft_strjoin(tab[fd_pos], buf);
		free(tab[fd_pos]);
		tab[fd_pos] = ptr;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (len);
}

int		get_next_line(const int fd, char **line)
{
	int			tmp;
	int			res;
	static char	*tmp_buf[1024];
	char		buffer[BUFF_SIZE + 1];

	if (fd < 0 || !line || read(fd, NULL, 0) == -1)
		return (-1);
	if ((tmp = ft_read_line(fd, buffer, tmp_buf)) < 0)
		return (-1);
	if (tmp == 0 && (tmp_buf[fd] == NULL || tmp_buf[fd][0] == '\0'))
		return (0);
	res = ft_new_line(fd, line, tmp_buf, tmp);
	return (res);
}
