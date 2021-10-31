NAME = libftprintf.a

SRCS = ft_x_and_p.c\
       ft_putchar_pp.c\
       ft_put_long_nbr.c\
       ft_putnbr_p.c\
       ft_putstr_pp.c\
       ft_str_toupper.c\
       ft_printf.c
OBJS = $(SRCS:%.c=%.o)

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I. -c

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME) $(OBJS)

re: fclean all

.PHONY: clean fclean all re
