/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:05:19 by camurill          #+#    #+#             */
/*   Updated: 2025/09/23 12:54:26 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include <stdexcept>

int main()
{
	try {
        // Test 1: Create forms y bureaucrats
        std::cout << "\n--- Test 1: Creating forms y bureaucrats ---" << std::endl;
        Bureaucrat highGrade("HighGrade", 5);
        Bureaucrat midGrade("MidGrade", 50);
        Bureaucrat lowGrade("LowGrade", 140);

        // Assuming you have a basic Form class for exercise 01
        Form basicForm("Basic Form", 25, 10);

        std::cout << highGrade << std::endl;
        std::cout << midGrade << std::endl;
        std::cout << lowGrade << std::endl;

        // Test 2: Signing form
        std::cout << "\n--- Test 2: Signing form successfully ---" << std::endl;
        highGrade.signForm(basicForm);

        // Test 3: Faling to sign
        std::cout << "\n--- Test 3: Failing to sign form ---" << std::endl;
        lowGrade.signForm(basicForm);

    } 
    catch (std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return (0);
}