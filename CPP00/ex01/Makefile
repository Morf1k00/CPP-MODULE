# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 15:21:30 by rkrechun          #+#    #+#              #
#    Updated: 2024/12/02 18:04:13 by rkrechun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = inc/

SRC = Contact \
		main \
		PhoneBook

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re