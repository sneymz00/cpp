/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:58:43 by camurill          #+#    #+#             */
/*   Updated: 2025/07/08 16:43:24 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void	randomChump(std::string name);

int main(void)
{
	Zombie *z = newZombie("Sney");
	z->announce();
	randomChump("Joan");
	delete z;
	return (0);
}
