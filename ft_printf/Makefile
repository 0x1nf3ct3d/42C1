LIBFT = ./libft/libft.a

N_TEMP = tmp.a

NAME = libftprintf.a

SRC = ft_printf.c\
      ft_ ft_printf_utils2.c

OBJ = ${SRC:.c=.o}

CC      = gcc
RM      = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJ}
	ar rcs ${NAME} ${OBJ}

all:	${NAME}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re:		fclean all
