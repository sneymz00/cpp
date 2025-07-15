/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:21:29 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 20:39:44 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exit..." << std::endl;
		exit(1);
	}
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	delete(this->_brain);
	std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	this->_brain = new Brain;
	if (this->_brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exit..." << std::endl;
		exit(1);
	}
	*this->_brain = *copy._brain;
	return *this;
}

void Cat::makeSound(void)const
{
	std::cout << this->_type<< "sounds like Miaaaauuuu" << std::endl;
}


void Cat::getIdeas(void)const
{
	for (int i = 0; i < 3; i++) //we can chage this, this only for examples
		std::cout << "Idea: " << this->_type << " is " << this->_brain->getIdea(i) << " at the adress is " << this->_brain->getIdeaAdress(i) << std::endl;
}

void Cat::setIdeas(size_t i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}
