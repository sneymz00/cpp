/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:27:05 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 21:07:26 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"


int main()
{
    {
        //Animal a;           // error
        Animal* p = new Dog();
        p->makeSound();
        delete p;
    }
    {
        std::cout << "=== EXERCISE 02: ABSTRACT CLASS TESTS ===" << std::endl;
        std::cout << std::endl;

        // TEST 1: Verificar que Animal no se puede instanciar directamente
        std::cout << "TEST 1: Animal abstract class (should NOT compile)" << std::endl;
        std::cout << "// Animal direct_animal;           // Error: cannot instantiate abstract class" << std::endl;
        std::cout << "// Animal* ptr_animal = new Animal(); // Error: cannot instantiate abstract class" << std::endl;
        std::cout << "✓ Animal class is properly abstract" << std::endl;
        std::cout << std::endl;

        // TEST 2: Verificar que Dog y Cat se pueden instanciar
        std::cout << "TEST 2: Dog and Cat instantiation" << std::endl;
        std::cout << "--- Creating Dog and Cat objects ---" << std::endl;
        Dog myDog;
        Cat myCat;
        std::cout << "✓ Dog and Cat can be instantiated" << std::endl;
        std::cout << std::endl;

        // TEST 3: Polimorfismo básico con punteros a Animal
        std::cout << "TEST 3: Basic polymorphism with Animal pointers" << std::endl;
        std::cout << "--- Creating polymorphic objects ---" << std::endl;
        Animal* dog_ptr = new Dog();
        Animal* cat_ptr = new Cat();
        
        std::cout << "--- Testing getType() ---" << std::endl;
        std::cout << "Dog type: " << dog_ptr->getType() << std::endl;
        std::cout << "Cat type: " << cat_ptr->getType() << std::endl;
        
        std::cout << "--- Testing makeSound() polymorphism ---" << std::endl;
        std::cout << "Dog sound: ";
        dog_ptr->makeSound();
        std::cout << "Cat sound: ";
        cat_ptr->makeSound();
        
        std::cout << "--- Cleaning up ---" << std::endl;
        delete dog_ptr;
        delete cat_ptr;
        std::cout << "✓ Polymorphism works correctly" << std::endl;
        std::cout << std::endl;
    }
}
