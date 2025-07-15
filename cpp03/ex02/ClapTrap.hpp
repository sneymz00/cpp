/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:41:29 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 12:16:26 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# pragma once
# include <iostream>
# include <string>

class ClapTrap
{
	protected:
			std::string		_name;
			unsigned int	_hit_points;
			unsigned int	_energy_points;
			unsigned int	_attack_dmg;
	public:
			//Consructors
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(ClapTrap const &copy);
			//destructor
			~ClapTrap();
			//operator
			ClapTrap& operator=(const ClapTrap &copy);
			//funtions
			void	attack(const std::string &target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
};

#endif
