NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I. -c
FILES = ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c
OBJ = $(FILES:%.c=%.o)

all: $(NAME)
copy:
	cp -f libc/*.c .

#ar rcs:
#r: replace the old files within the library if it already exists
#c: create the library if it doesn't exist
#s: sort
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)
	rm -f $(FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
