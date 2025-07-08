/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:40:39 by camurill          #+#    #+#             */
/*   Updated: 2025/07/08 17:01:18 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	int size = 5;

	Zombie *horde = zombieHorde(size, "Tom");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
