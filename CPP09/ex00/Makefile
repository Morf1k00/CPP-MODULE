# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rostik <rostik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/23 13:23:00 by rostik            #+#    #+#              #
#    Updated: 2025/04/23 13:23:19 by rostik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = inc/

SRC = BitcoinExchange \
		main

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Program Created!$(RESET)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)
	@echo "$(YELLOW)Object file delete! $(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Program delete! $(RESET)"

re: fclean all

.PHONY: all clean fclean re

GREEN = \033[1;32m
YELLOW = \033[1;33m
RED = \033[1m\033[38;5;196m
RESET = \033[0m