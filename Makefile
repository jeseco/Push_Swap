# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 12:23:00 by jcourtem          #+#    #+#              #
#    Updated: 2022/08/26 14:06:11 by jcourtem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= push_swap
CC		= gcc
CFLAGS	= -Wextra -Wall -Werror -g
FILES	= src/main.c \
		  src/stack_utils.c \
		  src/stack_init.c \
		  src/error_check.c \
		  src/error_digits.c \
		  src/error_int.c \
		  src/error_duplicate.c \
		  src/swap.c \
		  src/push.c \
		  src/rotate.c \
		  src/sort.c \
		  src/mini_sort.c \
		  src/simplify_stack.c
LIBFT	= libft/libft.a
OBJ	= $(FILES:.c=.o)

INTRA_GIT = git@vogsphere.42quebec.com:vogsphere/intra-uuid-25fa7b6b-ad18-487c-ba03-0a3f9626a22f-4221933-jcourtem

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -L./libft -lft -o $(NAME)

$(LIBFT):
	cd libft && $(MAKE)

$(OBJ):

.PHONY: clean fclean re lclean lfclean intra

clean: lclean
	cd src && rm -rf *.o

lclean:
	cd libft && $(MAKE) clean

fclean: clean lfclean
	rm -rf $(NAME)

lfclean:
	cd libft && $(MAKE) fclean

re: fclean all

intra:
	$(MAKE) fclean
	git add *
	git commit -m "pushed to intra"
	git push $(INTRA_GIT)
