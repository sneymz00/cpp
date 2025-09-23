/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:45:57 by camurill          #+#    #+#             */
/*   Updated: 2025/09/23 13:20:02 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm(): _name("Default"), _signed(false), _grade_to_sign(150), _grade_to_exec(150)
{

}

AForm::AForm(const std::string name, const int sign, const int exec): _name(name), _signed(false),  _grade_to_sign(sign), _grade_to_exec(exec)
{

}

AForm::AForm(const AForm &copy): _name(copy._name), _signed(copy._signed), _grade_to_sign(copy._grade_to_sign),_grade_to_exec(copy._grade_to_exec)
{

}

AForm::~AForm()
{

}

AForm	&AForm::operator=(const AForm &copy)
{
	if (this != &copy)
		_signed = copy._signed;
	return (*this);
}

void	AForm::beSigned(const Bureaucrat &bure)
{
	if (bure.getGrade() <= _grade_to_sign)
		_signed = true;
	else
		throw GradeTooLowException();
}

std::string	AForm::getNameF() const
{
	return(_name);
}

bool	AForm::getIsSigned() const
{
	return (_signed);
}

int	AForm::getSignGrade() const
{
	return (_grade_to_sign);
}

int AForm::getExecuteGrade() const
{
	return (_grade_to_exec);
}

void	AForm::setIsSigned(bool sign)
{
	_signed = sign;
}

void	AForm::execute(const Bureaucrat &exec) const
{
	if (_signed == false)
		throw IsNotSignedException();
	if (_grade_to_exec < exec.getGrade())
		throw GradeTooLowException();
	
	performAction();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too High!!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too Low!!");
}

const char *AForm::IsNotSignedException::what() const throw()
{
	return ("Cannot sign, because your grade it's too low!");
}

std::ostream &operator<<(std::ostream &os, AForm const &other)
{
	os << other.getNameF() << ", AForm grade is signed: " << other.getIsSigned() << ", grade to sign: "<< other.getSignGrade() << ", and grade to execute: " << other.getExecuteGrade() << std::endl;
	return (os);
}
