/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:23:36 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 12:46:12 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap &copy);

			virtual ~FragTrap();
			FragTrap &operator=(const FragTrap &copy);
			void	highFivesGuys(void);
};

#endif