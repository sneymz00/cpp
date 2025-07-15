/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:39:23 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 12:49:00 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap serena("Serena");
    ClapTrap basic("Bob");

    std::cout << "-----------------" << std::endl;
	std::cout << "Generic attack test" << std::endl;
    serena.attack("Bob");
    basic.takeDamage(20);

	std::cout << "-----------------" << std::endl;
	std::cout << "Fast Attack test" << std::endl;
    basic.attack("Serena");
    serena.takeDamage(0); 

    std::cout << "-----------------" << std::endl;
	std::cout << "Special attack test" << std::endl;
    serena.guardGate();

    std::cout << "-----------------" << std::endl;
	std::cout << "Exhaust Energy" << std::endl;
    for (int i = 0; i < 51; ++i)
        serena.attack("Wall");

    std::cout << "-----------------" << std::endl;
    return 0;
}
