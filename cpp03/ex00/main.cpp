/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:39:23 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 11:33:15 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a;
	ClapTrap b( "Robin" );

	//Really dead
	a.attack("some one chatgpt");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some one chatgppt");
	std::cout << "-------------------------" << std::endl;
	//Win
	b.attack("other IA robot");
	b.takeDamage(5);
	b.beRepaired(10);
	for (int i = 0; i < 10; i++)
		b.attack("other IA robot");
	b.beRepaired(4);
	return (0);
}
