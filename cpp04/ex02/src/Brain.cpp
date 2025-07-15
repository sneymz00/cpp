/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:43:55 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 20:27:54 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain Deconstructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 100; i++)
	{
		if (copy._ideas[i].length() > 0)
			this->_ideas[i].assign(copy._ideas[i]);
	}
	return *this;
}

const std::string	Brain::getIdea(size_t i)const
{
	if (i < 100)
		return (this->_ideas[i]);
	else
		return ("Only have 100 ideas per brain");
}

const std::string	*Brain::getIdeaAdress(size_t i)const
{
	if (i < 100)
	{
		const std::string	&stringREF = this->_ideas[i];
		return (&stringREF);
	}
	else
		return (NULL);
}

void	Brain::setIdea(size_t i, std::string idea)
{
	if (i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "Only have 100 ideas per brain" << std::endl;
}

