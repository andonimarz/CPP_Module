# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 10:51:35 by amarzana          #+#    #+#              #
#    Updated: 2023/01/24 17:46:22 by amarzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = phonebook

SRC = 	main.cpp \
		PhoneBook.cpp \
		Contact.cpp

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