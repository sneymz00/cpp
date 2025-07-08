/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:54:33 by camurill          #+#    #+#             */
/*   Updated: 2025/07/08 18:41:10 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap): _name(name), _weapon(weap)
{
	std::cout << "HumanA created: "<<this->_name << " takes the weapon: ";
	std::cout << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Human A "<< this->_name << " destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->_name << " attack with ";
	std::string weapon = this->_weapon.getType();
	std::cout << weapon << std::endl;
}
