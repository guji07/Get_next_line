#include "get_next_line.h"
int		main(void)
{
	char *arr1;
	char *arr2;
	char *arr3;

	arr1 = (char*)malloc(20);
	arr2 = (char*)malloc(20);
	arr3 = (char*)malloc(20);
	int fd = open("../test_file", O_RDONLY);
	printf("%i\n", get_next_line(fd, &arr1));
	printf("%i\n", get_next_line(fd, &arr2));
	printf("%i\n", get_next_line(fd, &arr3));
	printf("[%s]\n", arr1);
	printf("[%s]\n", arr2);
	printf("[%s]\n", arr3);
	return (0);
}
