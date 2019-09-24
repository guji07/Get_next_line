cmake_minimum_required(VERSION 3.14)
project(Get_next_line C)

set(CMAKE_C_STANDARD 99)

add_executable(Get_next_line get_next_line.c get_next_line.h tests.c
        libft/ft_strdel.c libft/ft_strsub.c libft/ft_strlen.c libft/ft_memalloc.c libft/ft_memmove.c
        libft/ft_strchr.c libft/ft_bzero.c libft/ft_strjoin.c libft/ft_memcpy.c libft/ft_strnew.c)