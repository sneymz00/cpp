/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:15:59 by camurill          #+#    #+#             */
/*   Updated: 2025/09/23 15:31:28 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& src)
{
	(void)src;
}

Intern &Intern::operator=(const Intern& src)
{
	(void)src;
	return (*this);
}

Intern::~Intern()
{
	
}

AForm *Intern::makeForm(const std::string f_name, const std::string f_type)
{
	int i = 0;
	std::string forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	while (i < 3 && f_name != forms[i])
		i++;
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << f_name << std::endl;
		return (new ShrubberyCreationForm(f_type));
	case 1:
		std::cout << "Intern creates " << f_name << std::endl;
		return (new RobotomyRequestForm(f_type));
	case 2:
		std::cout << "Intern creates " << f_name << std::endl;
		return (new PresidentialPardonForm(f_type));

	default:
		std::cout << "Form is not existing" << std::endl;
		return NULL;
	}
}