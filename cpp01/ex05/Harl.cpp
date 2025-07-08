/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:01:08 by camurill          #+#    #+#             */
/*   Updated: 2025/07/08 20:33:13 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "A wild Harl has appeared" << std::endl;
}

Harl::~Harl()
{
	std::cout << "You have defeated Harl" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << GREEN << "[DEBUG]   " << GBD;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger.";
	std::cout << " I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << GRAY << "[INFO]   " << GBD;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warming(void)
{
	std::cout << YELLOW << "[WARMING]   " << GBD;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years, whereas ";
	std::cout << "you started working here just last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << RED << "[ERROR]   " << GBD;
	std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string str)
{
	void	(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warming, &Harl::error};
	std::string level[4] = {"DEBUG", "INFO", "WARMING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level[i] == str)
		{
			(this->*ptr_complain[i])();
			break ;
		}
	}
}
