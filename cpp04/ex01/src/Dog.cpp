/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:23:30 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 20:10:05 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(): Animal()
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

void Dog::makeSound(void)const
{
	std::cout << this->_type<< " sounds like Guuuaauuu" << std::endl;
}

void Dog::getIdeas(void)const
{
	for (int i = 0; i < 5; i++) //we can chage this, this only for examples
		std::cout << "Idea: " << this->_type << " is " << this->_brain->getIdea(i) << "at the adress is " << this->_brain->getIdeaAdress(i) << std::endl;
}

void Dog::setIdeas(size_t i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}