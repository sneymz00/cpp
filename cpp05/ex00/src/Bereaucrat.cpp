/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bereaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:43:15 by nikitadorof       #+#    #+#             */
/*   Updated: 2025/07/23 19:49:47 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default"), _grade(150)
{
	std::cout << "Bureaucrat Default Constructor called, his name is " << this->_name;
	std::cout << "";
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Deconstructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Bureaucrat Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

void Bureaucrat::makeSound(void)const
{
}

std::string	Bureaucrat::getType(void)const
{
	return (this->_type);
}
