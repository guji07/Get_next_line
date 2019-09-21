#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int		main(void)
{
	char *arr1;

	arr1 = (char*)ft_memalloc(200);
	int fd = open("../test_file", O_RDONLY);
	get_next_line(fd, &arr1);
	printf("line: [%s]\n", arr1);
	char *arr2 = (char*)ft_memalloc(200);
	get_next_line(fd, &arr2);
	printf("line: [%s]\n", arr2);
	return (0);
}
