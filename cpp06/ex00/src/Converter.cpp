/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:30:48 by camurill          #+#    #+#             */
/*   Updated: 2025/10/20 13:58:18 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

void	printSpecial(const std::string& str)
{
	if (str == "nan" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

void	printChar(const std::string& str, size_t len)
{
	char c;

	if (len == 1)
		c = str[0];
	else
		c = str[1];
	std::cout << "char: ";
	if (isprint(c))
	{
		std::cout << "'" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	else
		std::cout << "Non dispayable" << std::endl;
}

void printInt(const std::string& str)
{
	long	nbr = std::atol(str.c_str());

	std::cout << "char:  ";
	if (nbr < - 0 || nbr > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		if (isprint(nbr))
			std::cout << "'" << static_cast<char>(nbr) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	if ((nbr < MIN_INT )|| (nbr > MAX_INT))
		std::cout << "imposible" << std::endl;
	else
		std::cout << static_cast<int>(nbr) << std::endl;
	std::cout << "float: " << static_cast<float>(nbr) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(nbr) << ".0" << std::endl;
}

void	printFloat(const std::string& str)
{
	float	nbr =  std::atof(str.c_str());
	bool	tol = std::fabs(nbr - static_cast<int>(nbr)) < 0;

	std::cout << "char: ";
	if (nbr < 0 || nbr > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		if (isprint(nbr))
			std::cout << "'" << static_cast<char>(nbr) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	if (static_cast<long>(nbr) < MIN_INT || static_cast<long>(nbr) > MAX_INT)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(nbr) << std::endl;
	std::cout << "float: ";
	if (nbr < MIN_FLOAT || nbr > MAX_FLOAT)
		std::cout << "impossible" << std::endl;
	else
		std::cout << nbr << std::endl;
	std::cout << "double" << static_cast<double>(nbr) << (tol ? ".0" : "") << std::endl;
}

void	printDouble(const std::string& str)
{
	double	nbr = std::atof(str.c_str());
	bool	tol = std::fabs(nbr - static_cast<int>(nbr)) < 0.0000000000001;

	std::cout << "char: ";
	if (nbr < 0 || nbr > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		if (isprint(nbr))
			std::cout << "'" << static_cast<char>(nbr) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	if (nbr < MIN_INT || nbr > MAX_INT)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(nbr) << std::endl;
	std::cout << "float: ";
	if (nbr < MIN_FLOAT || nbr > MAX_FLOAT)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(nbr) << (tol ? ".0f" : "f") << std::endl;
	std::cout << "double: ";
	if (nbr < MIN_DOUBLE || nbr > MAX_DOUBLE)
		std::cout << "impossible" << std::endl;
	else
		std::cout << nbr << std::endl;
}