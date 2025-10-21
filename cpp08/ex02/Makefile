# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 14:35:07 by nikitadorof       #+#    #+#              #
#    Updated: 2025/10/21 14:36:05 by nikitadorof      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp\
		MutantStack.cpp

INCS =	MutantStack.hpp

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