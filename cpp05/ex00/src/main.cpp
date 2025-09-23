/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:05:19 by camurill          #+#    #+#             */
/*   Updated: 2025/09/23 12:23:44 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include <stdexcept>

int main()
{
	try 
	{
        // Test 1: Crear bureaucrats válidos
        std::cout << "\n--- Test 1: Creating valid bureaucrats ---" << std::endl;
        Bureaucrat bob("Bob", 75);
        Bureaucrat alice("Alice", 1);
        Bureaucrat charlie("Charlie", 150);

        std::cout << bob << std::endl;
        std::cout << alice << std::endl;
        std::cout << charlie << std::endl;

        // Test 2: Increment y decrement
        std::cout << "\n--- Test 2: Increment y decrement ---" << std::endl;
        std::cout << "Bob before: " << bob << std::endl;
        bob.incrementGrade(); // 75 -> 74
        std::cout << "Bob after increment: " << bob << std::endl;
        bob.decrementGrade(); // 74 -> 75
        std::cout << "Bob after decrement: " << bob << std::endl;

    } 
	catch (std::exception& e) 
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Test 3: Grade too high en constructor
    std::cout << "\n--- Test 3: Grade too high in constructor ---" << std::endl;
    try {
        Bureaucrat invalid("Invalid", 0);
    } 
	catch (std::exception& e) 
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Test 4: Grade too low en constructor
    std::cout << "\n--- Test 4: Grade too low in constructor ---" << std::endl;
    try 
	{
        Bureaucrat invalid("Invalid", 151);
    } 
	catch (std::exception& e) 
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Test 5: Increment grade 1
    std::cout << "\n--- Test 5: Increment grade 1 (should throw) ---" << std::endl;
    try {
        Bureaucrat top("Top", 1);
        std::cout << "Antes: " << top << std::endl;
        top.incrementGrade(); // throw exception
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Test 6: Decrement grade 150
    std::cout << "\n--- Test 6: Decrement grade 150 (should throw) ---" << std::endl;
    try {
        Bureaucrat bottom("Bottom", 150);
        std::cout << "Antes: " << bottom << std::endl;
        bottom.decrementGrade(); // throw exception
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	return (0);
}