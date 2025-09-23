/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:05:19 by camurill          #+#    #+#             */
/*   Updated: 2025/09/23 13:23:54 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include <stdexcept>

int main()
{
	 try {
        // Test 1: Creating bureaucrats with diferents grades
        std::cout << "\n--- Test 1: Creating bureaucrats ---" << std::endl;
        Bureaucrat president("President", 1);
        Bureaucrat manager("Manager", 50);
        Bureaucrat intern("Intern", 150);

        std::cout << president << std::endl;
        std::cout << manager << std::endl;
        std::cout << intern << std::endl;

        // Test 2: Creating Forms
        std::cout << "\n--- Test 2: Creating Forms ---" << std::endl;
        ShrubberyCreationForm shrubbery("garden");
        RobotomyRequestForm robotomy("Bender");
        PresidentialPardonForm pardon("Arthur Dent");

        std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
        std::cout << pardon << std::endl;

        // Test 3: Sign and execute ShrubberyCreationForm
        std::cout << "\n--- Test 3: ShrubberyCreationForm ---" << std::endl;
        manager.signForm(shrubbery); // Grade 50 > 145 requested
        manager.executeForm(shrubbery); // Grade 50 > 137 requested

        // Test 4: Sign and execute  RobotomyRequestForm
        std::cout << "\n--- Test 4: RobotomyRequestForm ---" << std::endl;
        manager.signForm(robotomy); // Grade 50 > 72 requested
        manager.executeForm(robotomy); // Grade 50 > 45 requested

        // Test 5: PresidentialPardonForm (requires high grades)
        std::cout << "\n--- Test 5: PresidentialPardonForm ---" << std::endl;
        president.signForm(pardon); // Grade 1 > 25 requested
        president.executeForm(pardon); // Grade 1 > 5 requested

        // Test 6: Try to run without signing
        std::cout << "\n--- Test 6: Try to run without signing ---" << std::endl;
        ShrubberyCreationForm unsignedForm("unsigned");
        std::cout << unsignedForm << std::endl;
        president.executeForm(unsignedForm); // Failed

        // Test 7: Insufficient grade to sign
        std::cout << "\n--- Test 7: Insufficient grade to sign ---" << std::endl;
        PresidentialPardonForm hardForm("impossible");
        intern.signForm(hardForm); // Grade 150 < 25 requested

        // Test 8: Insufficient grade to execute
        std::cout << "\n--- Test 8: Insufficient grade to execute ---" << std::endl;
        ShrubberyCreationForm easyToSign("easy");
        Bureaucrat signer("Signer", 140); // Can sign 
        Bureaucrat betterSigner("BetterSigner", 100); // You can execute (100 < 145)
        signer.signForm(easyToSign);
        betterSigner.signForm(easyToSign);
        signer.executeForm(easyToSign); // Grade 150 < 137 requested
        betterSigner.executeForm(easyToSign);

    } catch (std::exception& e) {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }
    return (0);
}