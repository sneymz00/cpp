/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:35:42 by camurill          #+#    #+#             */
/*   Updated: 2025/07/08 15:00:26 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/utils.hpp"
#include <iostream>

int	check_number(std::string str)
{
	int i = 0;
	if (str[0] == '0' && !str[1])
		return (0);
	if (str[0] == '-')
		return (0);
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

int check_valid(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == '\t')
			return (0);
		i++;
	}
	return (1);
}

std::string	add_spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}

std::string	ft_width(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

int	search(Contact contacts[8])
{
	char		aux;
	int			i;
	std::string	str;

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	aux = '0';
	i = 0;
	while (++aux <= '8')
	{
		if (contacts[aux - 1 - '0'].getFirstName().size() && ++i)
		{
			str = aux;
			str = ft_width(str, 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = ft_width(contacts[aux - 1  - '0'].getFirstName(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = ft_width(contacts[aux - 1 - '0'].getLastName(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = ft_width(contacts[aux - 1 - '0'].getNick(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			std::cout << "|" << std::endl;
		}
	}
	std::cout << " ------------------------------------------- " << std::endl;
	return (i);
}
