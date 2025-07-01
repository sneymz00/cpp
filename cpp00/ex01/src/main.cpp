/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:51:06 by camurill          #+#    #+#             */
/*   Updated: 2025/06/30 19:18:43 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"
#include "../inc/contact.hpp"
#include <iostream>

int main(int ac, char **ag)
{
	Phonebook	phonebook;
	std::string command;
	(void)ag;

	if (ac != 1)
		std::cout << "Please, only one argument" << std::endl;
	else
	{
		while (1)
		{
			std::cout << "Enter commmand (ADD, SEARCH, EXIT)" << std::endl;
			std::getline(std::cin, command);
			if (command == "ADD")
				phonebook.add_contact();
			else if (command == "EXIT")
				break ;
			else if (command == "SEARCH")
				phonebook.search_contact();
			else
				std::cout << "Please, only commands:\nADD\nSEARCH\nEXIT" << std::endl;
		}
	}
	return (0);
}
