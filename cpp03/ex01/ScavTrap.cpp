/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:35:45 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 12:50:24 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 30;
	this->_guardian_gate = false;
	std::cout << "ScavTrap Default Consructor created" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 30;
	this->_guardian_gate = false;
	std::cout << "ScavTrap Consructor: "<< this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
	std::cout << "StacTrap object copied" << std::endl;
	this->_guardian_gate = copy._guardian_gate;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap is destroyed: " << this->_name << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap operator is called" << std::endl;
	if (this != &copy)
		ClapTrap::operator=(copy);
	return (*this);
}

void	ScavTrap::attack(const std::string& enemy)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << this->_name << " atack to " << enemy << " causing "<< this->_attack_dmg << " points"<<std::endl;
		this->_energy_points--;
	}
	else if (this->_hit_points == 0)
		std::cout << this->_name << " cannot attack, because is dead" << std::endl;
	else if (this->_energy_points == 0)
		std::cout << this->_name << " cannot attack, because he hasn't energy points" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_guardian_gate == false)
	{
		this->_guardian_gate = true;
		std::cout << this->_name <<" is now guarding the gate" << std::endl;
	}
	else 
		std::cout << this->_name <<" is already guarding the gate" << std::endl;
}
