# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 12:24:42 by nikitadorof       #+#    #+#              #
#    Updated: 2025/07/09 12:58:35 by nikitadorof      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS =	main.cpp\
		Fixed.cpp\

INCS =	Fixed.hpp

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