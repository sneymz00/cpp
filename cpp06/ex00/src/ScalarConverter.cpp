/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:49:37 by camurill          #+#    #+#             */
/*   Updated: 2025/09/30 16:21:18 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& origin)
{
	*this = origin;
}

ScalarConverter ScalarConverter::operator=(const ScalarConverter& origin)
{
	(void)origin;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}

void ScalarConverter::convert(const std::string &str)
{
	size_t	len = str.length();
	e_type	type = WhichType(str, len);
	std::cout << "Tester: " << type << std::endl;
	/*switch (type)
	{
	case INVALID:
		std::cout << "Invalid input..." << std::endl;
		break;
	case SPECIAL:
		printSpecial(str);
		break;
	case CHAR:
		printChar(str, len);
		break;
	case INT:
		printInt(str);
		break;
	case FLOAT:
		printFloat(str);
		break;
	case DOUBLE:
		printDouble(str);
		break;
	default:
		break;
	}*/
}