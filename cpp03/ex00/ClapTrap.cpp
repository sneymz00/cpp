/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:38:58 by camurill          #+#    #+#             */
/*   Updated: 2025/07/12 19:33:24 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hit_points(10), _energy_points(10), _attack_dmg(0)
{
	std::cout << "ClapTrap Default Consructor created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_dmg(0)
{
	std::cout << "ClapTrap Consructor: "<< this->_name << "created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap object copied" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap is destroyed:" << this->_name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	this->_name = copy._name;
	this->_energy_points = copy._energy_points;
	this->_hit_points = copy._hit_points;
	this->_attack_dmg = copy._attack_dmg;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << this->_name << "atack to" << target << std::endl;
		this->_energy_points--;
	}
	else if (this->_energy_points == 0)
		std::cout << this->_name << "is not able to attack " << target << ", because he hasn't energy points" << std::endl;
	else
		std::cout << this->_name << "is not able to attack " << target << ", because he hasn't hits points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > amount)
		this->_hit_points -= amount;
	else if (this->_hit_points > 0)
		this->_hit_points = 0;
	else
	{
		std::cout << this->_name << "is already dead, stop attack!!" << std::endl;
		return ;
	}
	std::cout << this->_name << "received damange"
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0 && this->_hit_points > 0 && this->_hit_points + amount <= 10)
	{
		this->_hit_points += amount;
		this->_energy_points--;
	}
	else if (this->_energy_points == 0)
		std::cout << "cannot" << std::endl;
}
