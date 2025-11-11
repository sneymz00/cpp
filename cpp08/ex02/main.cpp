/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:14:29 by camurill          #+#    #+#             */
/*   Updated: 2025/10/25 17:39:07 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::cout << "Test 1:" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;

	std::cout << "Test 2: Pop" << std::endl;
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;

	std::cout << "Test 3: Iter" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(7);
	mstack.push(0);
	mstack.push(10);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	std::cout << "Iteri++: " <<*it << std::endl;
	--it;
	std::cout << "Iteri--: " <<*it << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}