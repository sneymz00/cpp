# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: camurill <camurill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 16:40:18 by camurill          #+#    #+#              #
#    Updated: 2025/07/08 17:40:29 by camurill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieHorde

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS =	main.cpp\
		Zombie.cpp\
		ZombieHorde.cpp

INCS =	Zombie.hpp

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