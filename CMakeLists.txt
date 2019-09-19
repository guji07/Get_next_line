cmake_minimum_required(VERSION 3.14)
project(123 C)

set(CMAKE_C_STANDARD 90)
add_executable(123 get_next_line.c get_next_line.h libft/ft_memalloc.c libft/ft_bzero.c
        libft/ft_strlen.c libft/ft_memmove.c libft/ft_memcpy.c tests.c)