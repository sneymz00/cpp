/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:27:05 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 20:39:29 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

int main()
{
    const int   N = 2;
    Animal*     zoo[N];

	std::cout << "------------------" << std::endl;
	std::cout << "---Test init---" << std::endl;
    for (int k = 0; k < N/2; ++k)  zoo[k] = new Dog();
    for (int k = N/2; k < N; ++k)  zoo[k] = new Cat();

	std::cout << "---Test Ideas Dogs---" << std::endl;
    Dog original;
    original.setIdeas(0, "run");
    original.setIdeas(1, "sleep");
    original.setIdeas(2, "climb");
    Dog copy(original);
    copy.getIdeas();

    std::cout << "---Test Ideas Cats---" << std::endl;
    Cat new_cat;
    new_cat.setIdeas(0, "run");
    new_cat.setIdeas(1, "sleep");
    new_cat.setIdeas(2, "climb");
    Cat copy2(new_cat);
    copy2.getIdeas();

	std::cout << "---Delete---" << std::endl;
    for (int k = 0; k < N; ++k) delete zoo[k];
	std::cout << "------------------" << std::endl;
}

