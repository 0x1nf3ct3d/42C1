NAME = libftprintf.a
LIBFT = libft.a

SRC = ./includes/
LIBFT_PATH = ./libft/

SRCS = includes/ft_x_and_p.c\
       includes/ft_putchar_pp.c\
       includes/ft_put_long_nbr.c\
       includes/ft_putnbr_p.c\
       includes/ft_putstr_pp.c\
       includes/ft_str_toupper.c\
       includes/ft_printf.c
OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rf -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -g -v $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${NAME}

re: fclean all

.PHONY: clean fclean all re
