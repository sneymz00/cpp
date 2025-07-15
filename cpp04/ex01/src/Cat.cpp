/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:21:29 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 20:09:42 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

void Cat::makeSound(void)const
{
	std::cout << this->_type<< "sounds like Miaaaauuuu" << std::endl;
}


void Cat::getIdeas(void)const
{
	for (int i = 0; i < 5; i++) //we can chage this, this only for examples
		std::cout << "Idea: " << this->_type << " is " << this->_brain->getIdea(i) << "at the adress is " << this->_brain->getIdeaAdress(i) << std::endl;
}

void Cat::setIdeas(size_t i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}
