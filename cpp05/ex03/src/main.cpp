/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:05:19 by camurill          #+#    #+#             */
/*   Updated: 2025/09/23 15:35:21 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Intern.hpp"
#include <stdexcept>

int main() 
{
    Intern  someRandomIntern;
    AForm*  form;

    //CASE 1
    std::cout << "\n--- Test 1: Creating RobotomyRequestForm ---" << std::endl;
    form = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }
    //CASE 0
    std::cout << "\n--- Test 2: Creating ShrubberyCreationForm ---" << std::endl;
    form = someRandomIntern.makeForm("ShrubberyCreationForm", "Home");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }
    //CASE 2
    std::cout << "\n--- Test 3: Creating PresidentialPardonForm ---" << std::endl;
    form = someRandomIntern.makeForm("PresidentialPardonForm", "Alice");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }
    //Invalid case
    std::cout << "\n--- Test 4: Invalid Form ---" << std::endl;
    form = someRandomIntern.makeForm("coffee form", "Bob");
    if (!form) {
        std::cout << "Intern could not create form.\n";
    }
    return (0);
}