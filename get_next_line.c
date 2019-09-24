/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 14:39:55 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/21 14:39:56 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int		ft_vl(char *arr)
{
	int		i;

	i = 0;
	while (arr[i] && arr[i] != '\n')
		i++;
	return (i);
}

int				get_next_line(const int fd, char **line)
{
	static	char	*arr;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	int				n;

	if (!arr)
		arr = ft_strnew(0);
	if (fd < 0 || !line || (read(fd, NULL, 0) < 0))
		return (-1);
	while ((n = read(fd, buf, BUFF_SIZE)))
	{
		buf[n] = '\0';
		tmp = ft_strjoin(arr, buf);
		free(arr);
		arr = tmp;
		if (ft_strchr(arr, '\n'))
			break ;
	}
	if (*arr == '\0')
		return (0);
	*line = ft_strsub(arr, 0, ft_vl(arr));
	n = ft_strlen(arr + ft_vl(arr) + 1);
	(ft_strlen(*line) < ft_strlen(arr)) ?
		ft_memmove(arr, arr + ft_vl(arr) + 1, n + 1) : ft_strdel(&arr);
	return (1);
}
