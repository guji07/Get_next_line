NAME = get_next_line.c
LIBFT = libft/*.c libft/*.h
all: gnl
gnl:
	gcc get_next_line.c get_next_line.h tests.c libft/ft_strlen.c libft/ft_memmove.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memalloc.c
clean:
	rm -f *.o
re: clean gnl
