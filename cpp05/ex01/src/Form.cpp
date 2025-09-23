/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:45:57 by camurill          #+#    #+#             */
/*   Updated: 2025/09/23 16:47:10 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form(): _name("Default"), _signed(false), _grade_to_sign(150), _grade_to_exec(150)
{

}

Form::Form(const std::string name, const int sign, const int exec): _name(name), _signed(false), _grade_to_sign(sign), _grade_to_exec(exec) 
{

}

Form::Form(const Form &copy): _name(copy._name), _signed(copy._signed), _grade_to_sign(copy._grade_to_sign),_grade_to_exec(copy._grade_to_exec)
{

}

Form::~Form()
{

}

Form	&Form::operator=(const Form &copy)
{
	if (this != &copy)
		_signed = copy._signed;
	return (*this);
}

void	Form::beSigned(const Bureaucrat &bure)
{
	if (bure.getGrade() <= _grade_to_sign)
		_signed = true;
	else
		throw GradeTooLowException();
}

std::string	Form::getNameF() const
{
	return(_name);
}

bool	Form::getIsSigned() const
{
	return (_signed);
}

int	Form::getSignGrade() const
{
	return (_grade_to_sign);
}

int Form::getExecuteGrade() const
{
	return (_grade_to_exec);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too High!!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too Low!!");
}

std::ostream &operator<<(std::ostream &os, Form const &other)
{
	os << other.getNameF() << ", Form grade is signed: " << other.getIsSigned() << ", grade to sign: "<< other.getSignGrade() << ", and grade to execute: " << other.getExecuteGrade() << std::endl;
	return (os);
}
