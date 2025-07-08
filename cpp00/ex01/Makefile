# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: camurill <camurill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 15:43:36 by camurill          #+#    #+#              #
#    Updated: 2025/07/08 15:23:31 by camurill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC_D = src/
INC = inc/

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS =	$(SRC_D)main.cpp\
		$(SRC_D)phonebook.cpp\
		$(SRC_D)contact.cpp\
		$(SRC_D)utils.cpp

INCS =	$(INC)contact.hpp\
		$(INC)phonebook.hpp\
		$(INC)utils.hpp

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