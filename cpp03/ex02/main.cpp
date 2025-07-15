/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:39:23 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 12:45:33 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap  clap("Clappy");
    ScavTrap  scav("Keeper");
    FragTrap  frag("Fragger");

	std::cout << "-----------------" << std::endl;
	std::cout << "Generic attack test" << std::endl;
    clap.attack("Enemy-A");
    scav.attack("Enemy-B");
    frag.attack("Enemy-C");

	std::cout << "-----------------" << std::endl;
	std::cout << "Special attack test" << std::endl;
    clap.attack("Enemy-A");
    scav.guardGate();
    frag.highFivesGuys();

    std::cout << "-----------------" << std::endl;
	std::cout << "Fast Attack test" << std::endl;
    frag.takeDamage(25);
    frag.beRepaired(10);
    scav.takeDamage(90);
    scav.beRepaired(5);

    std::cout << "-----------------" << std::endl;
	std::cout << "Exhaust Energy" << std::endl;
    for (int i = 0; i < 101; ++i)
        frag.attack("Punch-Bag");

    std::cout << "-----------------" << std::endl;
    return (0);
}
