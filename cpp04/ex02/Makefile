# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: camurill <camurill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 18:53:35 by camurill          #+#    #+#              #
#    Updated: 2025/07/15 20:12:20 by camurill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = src/
INC = inc/

SRCS =	$(SRC)main.cpp\
		$(SRC)Animal.cpp\
		$(SRC)WrongAnimal.cpp\
		$(SRC)WrongCat.cpp\
		$(SRC)Cat.cpp\
		$(SRC)Dog.cpp\
		$(SRC)Brain.cpp

INCS =	$(INC)Animal.hpp\
		$(INC)WrongAnimal.hpp\
		$(INC)WrongCat.hpp\
		$(INC)Cat.hpp\
		$(INC)Dog.hpp\
		$(INC)Brain.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile $(INCS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re