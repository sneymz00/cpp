/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:04:51 by camurill          #+#    #+#             */
/*   Updated: 2025/08/18 16:21:30 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default target")
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("PresitentialPardonForm", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	_target = copy._target;
	setIsSigned(copy.getIsSigned());
	return (*this);
}

void RobotomyRequestForm::performAction() const
{
	int random;

	random = rand() % 2;
	if (random == 1)
		std::cout << "Beep beep operating.... " << this->getNameF() << "is robotizing successfully" << std::endl;
	else
		throw RobotiztionFailed();
}

const char *RobotomyRequestForm::RobotiztionFailed::what() const throw()
{
	return ("Unfortunately robotomy failed...");
}