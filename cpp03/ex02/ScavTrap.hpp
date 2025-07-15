/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:36:10 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 12:17:42 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# pragma once
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
			bool	_guardian_gate;
	public:
			ScavTrap();
			ScavTrap(const std::string &name);
			ScavTrap(const ScavTrap& copy);
			virtual ~ScavTrap();

			ScavTrap& operator=(const ScavTrap& other);
			void	attack(const std::string &enemy);
			void	guardGate();
};

#endif
