/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:05:21 by camurill          #+#    #+#             */
/*   Updated: 2025/06/30 21:22:02 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"
#include "../inc/contact.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
	std::cout << "Hiii!!!, Created an empty phonebook for 8 contacts" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Byyeeee!!!" << std::endl;
}

void	Phonebook::add_contact(void)
{
	std::string str;

	str = "";
	if (this->index > 7)
		std::cout << "Warming: overwriting info about" << this->contacts[this->index % 8].getFirstName() << std::endl;
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a first name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].set_FirstName(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a last name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].set_LastName(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a nickname: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].set_Nick(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a number phone: ";
		if (std::getline(std::cin, str) && str != "")
		{
			//std::cout << "check number" << check_number(str) << std::endl;
			std::cout << "check str" << str << std::endl;
			if (check_number(str) == 0)
			{
				std::cout << "Pls, only numbers" << std::endl;
				str = "";
			}
			else
				this->contacts[this->index % 8].set_Phone(str);
		}
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a dark secret: ";
		if (std::getline(std::cin, str) && str != "")
		{
			this->contacts[this->index % 8].set_secret(str);
			std::cout << "Successfully added to phonebook" << std::endl;
		}
	}
	this->index++;
}

void	Phonebook::search_contact(void)
{
	std::string str;

	if (!search(this->contacts))
	{
		std::cout << "Phonebook is empty!" << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "Select an index: ";
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && this->contacts[str[0] - 1 - '0'].getFirstName().size())
				break ;
		}
		if (str == "")
			std::cout << "Invalid Index!" << std::endl;
	}
	if (!std::cin.eof())
		this->print_Phonebook(this->contacts[str[0] - 1 -'0']);
}

void	Phonebook::print_Phonebook(Contact contact)
{
	std::cout << std::endl <<"Requesting information..." << std::endl;
	if (!contact.getFirstName().size())
	{
		std::cout << "Error: Failed to get this contact" <<std::endl;
		return ;
	}
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNick() << std:: endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Dark secret: " << contact.getDarkSecret() << std::endl;
}

Contact	Phonebook::get_contact(int index)
{
	return (this->contacts[index % 8]);
}
