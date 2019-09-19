NAME = get_next_line.c
LIBFT = libft/*.c libft/*.h
all: gnl
gnl:
	gcc -Wall -Wextra -Werror $(NAME) $(LIBFT)
clean:
	rm -f *.o
re: clean gnl
