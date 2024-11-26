# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 15:20:00 by rkrechun          #+#    #+#              #
#    Updated: 2024/11/26 15:20:01 by rkrechun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = megaphone.cpp
OBJ = $(SRC:: .cpp=.o)


all: $(NAME)

%.o: %cpp 
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(SRC)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME) 

clean: 
	@$(RM) $(NAME)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean re