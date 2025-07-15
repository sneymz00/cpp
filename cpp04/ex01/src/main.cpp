/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:27:05 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 20:11:16 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

int main()
{
    const int   N = 6;
    Animal*     zoo[N];

	std::cout << "------------------" << std::endl;
	std::cout << "---Test init---" << std::endl;
    for (int k = 0; k < N/2; ++k)  zoo[k] = new Dog();
    for (int k = N/2; k < N; ++k)  zoo[k] = new Cat();

	std::cout << "---Test Ideas---" << std::endl;
    Dog original;
    original.setIdeas(0, "run");
    Dog copy(original);
    original.setIdeas(0, "sleep");
    copy.getIdeas();

	std::cout << "---Delete---" << std::endl;
    for (int k = 0; k < N; ++k) delete zoo[k];
	std::cout << "------------------" << std::endl;
}

