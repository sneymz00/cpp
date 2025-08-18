/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:05:19 by camurill          #+#    #+#             */
/*   Updated: 2025/08/18 16:32:09 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include <stdexcept>

int main()
{
	try {
        // Test 1: Crear forms y bureaucrats
        std::cout << "\n--- Test 1: Creando forms y bureaucrats ---" << std::endl;
        Bureaucrat highGrade("HighGrade", 5);
        Bureaucrat midGrade("MidGrade", 50);
        Bureaucrat lowGrade("LowGrade", 140);

        // Asumiendo que tienes una clase Form básica para el exercise 01
        Form basicForm("Basic Form", 25, 10);

        std::cout << highGrade << std::endl;
        std::cout << midGrade << std::endl;
        std::cout << lowGrade << std::endl;

        // Test 2: Firmar formulario exitosamente
        std::cout << "\n--- Test 2: Signing form successfully ---" << std::endl;
        highGrade.signForm(basicForm);

        // Test 3: Fallar al firmar formulario
        std::cout << "\n--- Test 3: Failing to sign form ---" << std::endl;
        lowGrade.signForm(basicForm);

    } 
    catch (std::exception& e) 
    {
        std::cout << "Excepción capturada: " << e.what() << std::endl;
    }
    return (0);
}