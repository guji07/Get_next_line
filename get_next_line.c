#include <fcntl.h>
#include "get_next_line.h"

static		int		ft_print_liner(char *arr, char **line, int size, int j)
{
	int		i;
	int		n;

	i = -1;
	while (arr[++i] != '\n' && arr[i])
	{
		(*line)[i + j] = arr[i];
		arr[i] = '\0';
	}
	if (arr[i] == '\n')
	{
		n = ft_strlen(arr + i + 1);
		if (n)
		{
			ft_memmove(arr, arr + i + 1, n);
			arr[n] = '\0';
		}
		(*line)[i + j] = '\0';
		if (!(arr[0]))
			free(arr);
		return (1);
	}
	(*line)[i + j] = '\0';
	return (i);
}

static 		int 	ft_free(char *arr)
{
	free(arr);
	return (0);
}

static		int		ft_validate_line(char *arr, int n)
{
	int		i;

	i = -1;
	while (++i < n && arr[i])
		if (arr[i] == '\n')
			return (1);
	return (0);
}

static		int		ft_print_line(char *arr, char **line, int size)
{
	int		i;
	int		n;

	i = -1;
	while (arr[++i] != '\n' && arr[i])
	{
		(*line)[i] = arr[i];
		arr[i] = '\0';
	}
	if (arr[i] == '\n')
	{
		n = ft_strlen(arr + i + 1);
		if (n)
		{
			ft_memmove(arr, arr + i + 1, n);
			arr[n] = '\0';
		}
		(*line)[i] = '\0';
		return (-1);
	}
	(*line)[i] = '\0';
	return (i);
}

int					get_next_line(const int fd, char **line)
{
	static	char	*arr;
	static	int		size;
	int				i;
	int 			j;

	i = 0;
	if (fd < 0 || !line || (read(fd, NULL, 0) < 0))
		return (0);
	if (!arr)
	{
		arr = (char*)ft_memalloc(BUFF_SIZE * 10);
		size = BUFF_SIZE * 105;
	}
	if (arr[0 + (j = 0)])
		if ((j = ft_print_line(arr, line, size)) < 0)
			return (1);
	while ((i = i + BUFF_SIZE))
	{
		if ((read(fd, arr + i - BUFF_SIZE, BUFF_SIZE) != BUFF_SIZE) || ft_validate_line(arr, i))
			break ;
		if (i + BUFF_SIZE > size)
			arr = realloc(arr, (size *= 105));
	}
	return (ft_print_liner(arr, line, size, j));
}
