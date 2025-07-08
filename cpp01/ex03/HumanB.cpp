/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:10:48 by camurill          #+#    #+#             */
/*   Updated: 2025/07/08 18:49:29 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->weapon = NULL;
	std::cout << "HumanB " << this->_name << " create with no weapon" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB "<< this->_name << " destroyed" << std::endl;
}

void HumanB::attack()
{
	std::string weapon = this->weapon->getType();
	if (weapon.empty() == true)
	{
		std::cout << this->_name << "cannot attack" << std::endl;
		return ;
	}
	std::cout << this->_name << " attack with ";
	std::cout << weapon << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
