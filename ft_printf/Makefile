NAME		= libftprintf.a
LIBFT_LIB	= libft.a
LIBFT		= libft

SRCS		= ./ft_print_c.c\
		  ./ft_printf.c\
		  ./ft_print_nbr.c\
		  ./ft_print_str.c\
		  ./utils.c

OBJS		= $(SRCS:.c=.o)
INCS		= .
RM		= rm -f
LIBC		= ar rc
CC		= gcc
CFLAGS		= -Wall -Wextra -Werror -Wno-self-assign
.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(INCS)

$(NAME) : $(OBJS)
	make all -C $(LIBFT)/
	cp $(LIBFT)/$(LIBFT_LIB) $(NAME)
	$(LIBC) $(NAME) $(OBJS)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT)

clean :
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

re : fclean all
