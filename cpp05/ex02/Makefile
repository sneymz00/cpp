# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: camurill <camurill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/16 12:54:20 by camurill          #+#    #+#              #
#    Updated: 2025/08/18 16:38:30 by camurill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = src/
INC = inc/

SRCS =	$(SRC)main.cpp\
		$(SRC)Bureaucrat.cpp\
		$(SRC)AForm.cpp\
		$(SRC)PresidentialPardonForm.cpp\
		$(SRC)ShrubberyCreationForm.cpp\
		$(SRC)RobotomyRequestForm.cpp

INCS =	$(INC)Bureaucrat.hpp\
		$(INC)AForm.hpp\
		$(INC)PresidentialPardonForm.hpp\
		$(INC)RobotomyRequestForm.hpp\
		$(INC)ShrubberyCreationForm.hpp

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