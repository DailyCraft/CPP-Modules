# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 13:33:55 by dvan-hum          #+#    #+#              #
#    Updated: 2025/01/31 13:51:53 by dvan-hum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsp

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -O3

SRC = bsp.cpp main.cpp Fixed.cpp Point.cpp
OBJ = $(SRC:%.cpp=obj/%.o)

ifndef VERBOSE
MAKEFLAGS += --silent
endif

all: $(NAME)

$(NAME): $(OBJ)
	echo "\n\t\e[1;32mBuilding\e[0m \e[36m$(NAME)\e[0m\n"
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJ)

obj/%.o: src/%.cpp
	echo "$(NAME) \e[90m➤\e[0m \e[32mCompiling\e[0m \e[36m$<\e[0m"
	mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -c $< -o $@ -I ./includes

clean:
	echo "$(NAME) \e[90m➤\e[0m\t\e[1;31mCleaning object files\e[0m"
	rm -rf ./obj

fclean: clean
	echo "$(NAME) \e[90m➤\e[0m\t\e[31mCleaning $(NAME)\e[0m"
	rm -f $(NAME)

re: fclean all