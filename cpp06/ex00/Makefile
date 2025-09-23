# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: camurill <camurill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/23 17:05:26 by camurill          #+#    #+#              #
#    Updated: 2025/09/23 17:07:17 by camurill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = src/
INC = inc/

SRCS =	$(SRC)main.cpp\
		$(SRC)ScalarConverter.cpp\
		$(SRC)Converter.cpp\
		$(SRC)Which_type.cpp

INCS =	$(INC)ScalarConverter.hpp

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