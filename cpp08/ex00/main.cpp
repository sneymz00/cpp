/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:56:54 by nikitadorof       #+#    #+#             */
/*   Updated: 2025/10/24 17:03:17 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
#include <deque>


int main()
{
	//Test 1: Vect with elements
	std::vector <int> vec;

	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(2);
	vec.push_back(5);
	vec.push_back(4);

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 4);
		std::cout << "Found element <vect>: " << *it << std::endl;
		std::cout << "Position: " << std::distance(vec.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 6);
		std::cout << "Found element: " << *it << std::endl;
		std::cout << "Position: " << std::distance(vec.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	//Test 2: List with elements
	std::list <int> lst;

	lst.push_back(1);
	lst.push_back(3);
	lst.push_back(2);
	lst.push_back(5);
	lst.push_back(4);

	try
	{
		std::list<int>::iterator it = easyfind(lst, 1);
		std::cout << "Found element <list>: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		std::list<int>::iterator it = easyfind(lst, 42);
		std::cout << "Found element <list>: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	//Test 3: Deque with elements
	std::deque <int> deq;

	deq.push_back(100);
	deq.push_back(300);
	deq.push_back(200);
	deq.push_back(500);
	deq.push_back(400);

	try
	{
		std::deque<int>::iterator it = easyfind(deq, 400);
		std::cout << "Found element <deque>: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		std::deque<int>::iterator it = easyfind(deq, 42);
		std::cout << "Found element <deque>:" << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}