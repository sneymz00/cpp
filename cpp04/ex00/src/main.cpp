/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:27:05 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 19:31:56 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	std::cout << "------------------" << std::endl;
	std::cout << "---Test init---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j    = new Dog();
    const Animal* i    = new Cat();

	std::cout << "---Get type---" << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

	std::cout << "---Make Sounds---" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

	std::cout << "---Delete---" << std::endl;
    delete meta;
    delete j;
    delete i;
	std::cout << "------------------" << std::endl;

    std::cout << "*----Test wrong classes----" << std::endl;
    const WrongAnimal* w = new WrongCat();
    w->makeSound(); 
    delete w;
	std::cout << "------------------" << std::endl;
	return (0);
}
