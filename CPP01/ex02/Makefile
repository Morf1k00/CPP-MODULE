# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rostik <rostik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/06 14:32:44 by rostik            #+#    #+#              #
#    Updated: 2025/01/08 16:30:50 by rostik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hiThisIsBrain

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC_DIR = src/
OBJ_DIR = obj/

SRC = main

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)Program Created!$(RESET)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
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