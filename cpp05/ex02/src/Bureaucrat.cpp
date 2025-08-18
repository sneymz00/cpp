/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:06:43 by camurill          #+#    #+#             */
/*   Updated: 2025/08/18 15:07:21 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{

}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name), _grade(copy._grade)
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
		_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getNameF() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " cannot sign " << form.getNameF() << e.what() << '\n';
	}
}

void Bureaucrat::executeForm(AForm &form)
{
	try
	{
		form.Execute();
		std::cout << _name << " executed " << form.getNameF() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too High!!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too Low!!");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other)
{
	os << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return (os);
}