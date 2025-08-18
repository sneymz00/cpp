/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:05:19 by camurill          #+#    #+#             */
/*   Updated: 2025/08/18 16:27:45 by camurill         ###   ########.fr       */
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
        // Test 1: Crear bureaucrats con diferentes grades
        std::cout << "\n--- Test 1: Creando bureaucrats ---" << std::endl;
        Bureaucrat president("President", 1);
        Bureaucrat manager("Manager", 50);
        Bureaucrat intern("Intern", 150);

        std::cout << president << std::endl;
        std::cout << manager << std::endl;
        std::cout << intern << std::endl;

        // Test 2: Crear las tres formas específicas
        std::cout << "\n--- Test 2: Creando formas específicas ---" << std::endl;
        ShrubberyCreationForm shrubbery("garden");
        RobotomyRequestForm robotomy("Bender");
        PresidentialPardonForm pardon("Arthur Dent");

        std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
        std::cout << pardon << std::endl;

        // Test 3: Firmar y ejecutar ShrubberyCreationForm
        std::cout << "\n--- Test 3: ShrubberyCreationForm ---" << std::endl;
        manager.signForm(shrubbery); // Grade 50 > 145 requerido
        manager.executeForm(shrubbery); // Grade 50 > 137 requerido

        // Test 4: Firmar y ejecutar RobotomyRequestForm
        std::cout << "\n--- Test 4: RobotomyRequestForm ---" << std::endl;
        manager.signForm(robotomy); // Grade 50 > 72 requerido
        manager.executeForm(robotomy); // Grade 50 > 45 requerido

        // Test 5: PresidentialPardonForm (requiere grades altos)
        std::cout << "\n--- Test 5: PresidentialPardonForm ---" << std::endl;
        president.signForm(pardon); // Grade 1 > 25 requerido
        president.executeForm(pardon); // Grade 1 > 5 requerido

        // Test 6: Intentar ejecutar sin firmar
        std::cout << "\n--- Test 6: Ejecutar sin firmar ---" << std::endl;
        ShrubberyCreationForm unsignedForm("unsigned");
        std::cout << unsignedForm << std::endl;
        president.executeForm(unsignedForm); // Debería fallar

        // Test 7: Grade insuficiente para firmar
        std::cout << "\n--- Test 7: Grade insuficiente para firmar ---" << std::endl;
        PresidentialPardonForm hardForm("impossible");
        intern.signForm(hardForm); // Grade 150 < 25 requerido

        // Test 8: Grade insuficiente para ejecutar
        std::cout << "\n--- Test 8: Grade insuficiente para ejecutar ---" << std::endl;
        ShrubberyCreationForm easyToSign("easy");
        Bureaucrat signer("Signer", 100); // Puede firmar (100 > 145 es falso, necesitamos alguien mejor)
        Bureaucrat betterSigner("BetterSigner", 140); // Puede firmar (140 <= 145)
        betterSigner.signForm(easyToSign);
        intern.executeForm(easyToSign); // Grade 150 < 137 requerido

    } catch (std::exception& e) {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }
    return (0);
}