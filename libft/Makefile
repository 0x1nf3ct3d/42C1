# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsabir <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 13:50:51 by hsabir            #+#    #+#              #
#    Updated: 2021/10/12 15:39:21 by hsabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I. -c
FILES = ft_isalpha.c
OBJ = $(FILES:%.c=%.o)

all: $(NAME)
#copy:
#	cp -f libc/*.c .

#ar rcs:
#r: replace the old files within the library if it already exists
#c: Whenever an archive is created, an informational message to that effect is written to standard error. If the -c option is specified, ar creates the archive silently.
#s: 
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

#re: fclean all

.PHONY: clean fclean all re
