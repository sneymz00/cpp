# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: camurill <camurill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 13:56:33 by nikitadorof       #+#    #+#              #
#    Updated: 2025/10/24 16:54:53 by camurill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Easyfind

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp

INCS =	Easyfind.hpp

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