# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: telain <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/29 16:27:16 by telain            #+#    #+#              #
#    Updated: 2018/06/29 21:50:53 by telain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \e[32m
RED = \e[31m
WHITE = \e[0m
YELLOW = \e[33m

NAME := libfts.a

FLAGS := -fmacho64
NASM = ~/homebrew/bin/nasm


SRC := Hello.s ft_isdigit.s main.s


OBJ := $(SRC:.s=.o)

all: $(NAME)
	@ld -o main_test main.o
	@printf "\t\t$(GREEN)Done √ $(WHITE) \nUse ./main_test to start the lib testing\n"

$(NAME): $(OBJ)

fclean: clean
	@rm -rf $(NAME) main_test

clean:
	@rm -rf $(OBJ)
	@printf "$(GREEN)All objects cleaned !\n$(WHITE)"

re:
	@make fclean all

go: re
	@./main_test

%.o: %.s
	@$(NASM) -fmacho64 $^
	@printf "[ $(GREEN)$(NAME)$(WHITE) ]  : Built $(YELLOW) $^ $(WHITE) --> $(YELLOW)$@ $(WHITE)\n"
