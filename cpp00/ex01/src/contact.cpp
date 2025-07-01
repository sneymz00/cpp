/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:37:17 by camurill          #+#    #+#             */
/*   Updated: 2025/06/30 20:26:27 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}
		
std::string Contact::getFirstName() const
{
	return (this->firstName);
}
std::string Contact::getLastName() const{
	return (this->lastName);
}
std::string Contact::getNick() const{
	return (this->nickName);
}
std::string Contact::getPhoneNumber() const{
	return (this->phoneNumber);
}
std::string Contact::getDarkSecret() const{
	return (this->darkSecret);
}

void	Contact::set_FirstName(std::string str)
{
	this->firstName = str;
}

void	Contact::set_LastName(std::string str)
{
	this->lastName = str;
}

void	Contact::set_Nick(std::string str)
{
	this->nickName = str;
}

void	Contact::set_Phone(std::string str)
{
	this->phoneNumber = str;
}

void	Contact::set_secret(std::string str)
{
	this->darkSecret = str;
}


