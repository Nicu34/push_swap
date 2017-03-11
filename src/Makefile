# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/19 12:09:01 by nmuresan          #+#    #+#              #
#    Updated: 2016/03/19 12:13:30 by nmuresan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = *.c 

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/ 
	gcc -Wextra -Wall -Werror -I libft/ -c $(SRCS)
	gcc -o $(NAME) $(OBJ) -L libft/ -lft

clean:
	make -C libft/ clean
	/bin/rm -f $(OBJ)

fclean: clean
	make -C libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all
