# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#              #
#    Updated: 2023/01/31 17:47:32 by amarzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = a.out

SRC = 	main.cpp		\
		Fixed.cpp		\
		Point.cpp		\
		bsp.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra -std=c++98

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
		c++ $(CFLAGS) -o $(NAME) $(OBJ)
		@echo "Files created"

clean:
		@rm -f $(OBJ)
		@echo "Removing objects"

fclean: clean
		@rm -f $(NAME)
		@echo "Removing executable"

re: fclean all

.PHONY: all clean fclean re