# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsabir <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 13:50:51 by hsabir            #+#    #+#              #
#    Updated: 2021/10/15 16:55:18 by hsabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I. -c
FILES = ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putnbr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c
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
#So is needed only on linux in order to the unit test work properly
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(FILES)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

#re: fclean all

.PHONY: clean fclean all re
