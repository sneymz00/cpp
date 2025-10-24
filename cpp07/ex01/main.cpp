/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:11:25 by camurill          #+#    #+#             */
/*   Updated: 2025/10/20 18:56:34 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Iter.hpp"

template <typename T>
void	print(T const &element)
{
	std::cout << element << " ";
}

template <typename T>
void increment(T &element)
{
	element++;
}

void toUpper(char &element)
{
	if (element >= 'a' && element <= 'z')
		element -= 32;
}

int main(void)
{
	int i_arr[] = {1, 2, 3, 4, 5};

	//Ints
	std::cout << "Original: " << std::endl;
	::iter(i_arr, 5, print<int>);
	std::cout << std::endl;
	::iter(i_arr, 5, increment<int>);
	std::cout << "Increment: " << std::endl;
	::iter(i_arr, 5, print<int>);
	std::cout << std::endl;

	//Chars
	char c_arr[] = {'a', 'b', 'c', 'd'};
	size_t len_c = sizeof(c_arr) / sizeof(c_arr[0]);
	
	std::cout << "Original: " << std::endl;
	::iter(c_arr, len_c, print<char>);
	std::cout << std::endl;
	::iter(c_arr, len_c, toUpper);
	std::cout << "ToUpper: " << std::endl;
	::iter(c_arr, len_c, print<char>);
	std::cout << std::endl;

	//Strings
	std::string s_arr[] = {"New", "Day", "York", "Happy"};
	size_t len_s = sizeof(s_arr) / sizeof(s_arr[0]);
	std::cout << "Print strings: " << std::endl;
	::iter(s_arr, len_s, print<std::string>);
	std::cout << std::endl;
}
