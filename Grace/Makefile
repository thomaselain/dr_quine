# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: telain <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/29 16:27:16 by telain            #+#    #+#              #
#    Updated: 2018/06/29 21:50:32 by telain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \e[32m
RED = \e[31m
WHITE = \e[0m
YELLOW = \e[33m

NAME := Grace

SRC := $(NAME).c

CFLAGS := $(INC) -g -F libs/ -Wall -Wextra -Werror
OBJ := $(SRC:.c=.o)
CC := gcc


all: $(NAME)
	@chmod +x $(NAME)


$(NAME) : $(OBJ)
	@$(CC) -o $(NAME) $(OBJ)

fclean: clean
	@rm -rf $(NAME)

clean:
	@rm -rf $(OBJ)

re:
	@make fclean all

go: re all
	./$(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $^ -o $@
	@printf "$(GREEN)  $(NAME) $(WHITE)  : Built $(YELLOW) $@\n $(WHITE)"
