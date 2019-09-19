#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

static		int		ft_validate_line(char *arr, int n)
{
	int		i;

	i = -1;
	while (++i < n && arr[i])
		if (arr[i] == '\n')
		{
			ft_memmove(arr, arr + i + 1, ft_strlen(arr + i + 1));
			return (1);
		}
	return (0);
}

static		int		ft_print_line(char *arr, char **line, int size)
{
	int		i;
	int		n;

	i = -1;
	while (arr[++i] != '\n' && arr[i])
		(*line)[i] = arr[i];
	if (arr[i] == '\n')
	{
		n = ft_strlen(arr + i + 1);
		if (n)
		{
			ft_memmove(arr, arr + i, n);
			arr[n] = '\0';
		}
		(*line)[i] = '\0';
		return (1);
	}
	ft_bzero(arr, size);
	return (0);
}

int					get_next_line(const int fd, char **line)
{
	static	char	*arr;
	static	int		size;
	int				i;

	i = 0;
	if (fd < 0 || !line || (read(fd, NULL, 0) < 0))
		return (0);
	if (!arr)
	{
		arr = (char*)ft_memalloc(BUFF_SIZE);
		size = BUFF_SIZE;
	}
	if (arr[0])
		if (ft_print_line(arr, line, size) == -1)
			return (1);
	while ((i = i + BUFF_SIZE))
	{
		if ((read(fd, arr + i - BUFF_SIZE, BUFF_SIZE) != BUFF_SIZE))
			break ;
		if (ft_validate_line(arr + i - BUFF_SIZE, BUFF_SIZE))
			break ;
		if (i + BUFF_SIZE > size)
			arr = realloc(arr, (size *= 10));
	}
	return (ft_print_line(arr, line, size));
}
