/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:51:06 by camurill          #+#    #+#             */
/*   Updated: 2025/07/08 17:30:50 by camurill         ###   ########.fr       */
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
			if (!std::getline(std::cin, command) || std::cin.eof())
			{
				std::cout << "\nInput stream closed (EOF received). Exiting...\n";
       			break;
			}
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
