/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Which_type.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:04:05 by camurill          #+#    #+#             */
/*   Updated: 2025/09/23 17:04:10 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

static int isSpecial(const std::string& str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
		return 1;
	return 0;
}

static int isChar(const std::string& str, size_t& len)
{
	if (len ==1 && !isdigit(str[0]))
		return 1;
	if (len == 3 && str[0] == '\'' && str[2] == '\'')
		return 1;
	return 0;
}

static int isInt(const std::string& str, size_t& len)
{
	int		i = 0;
	bool	sum = false;

	if (str[0] == '-' || str[0] == '+')
	{
		sum = true;
		i++;
	}
	while (str[i] && len > 0 && len < 12 || (str[i] && !sum && len > 0 && len < 11))
	{
		if (!isdigit(str[i]))
			return 0;
		i++;
	}
	return 1;
}

static int isFloat(const std::string& str, size_t& len, size_t& fl)
{
	for (int j = fl - 1; j >= 0; j--)
	{
		if (!isdigit(str[j]) && j != 0)
			return 0;
		if (!isdigit(str[j]) && j != 0 &&  (str[j] != '+' && str[j] != '-'))
			return 0;
	}
	for (int i = fl + 1; i < len; i++)
	{
		if (!isdigit(str[i]) && str[i] != 'f')
			return 0;
		if (str[i] == 'f' && i != len - 1)
			return 0;
	}
	return 1;
}

e_type WhichType(const std::string& str, size_t& len)
{
	size_t	fl = str.find('.');
	size_t	f = str.find('f');

	if (fl = std::string::npos)
	{
		if (isSpecial(str))
			return (SPECIAL);
		if (isChar(str, len))
			return (CHAR);
		if (isInt(str, len))
			return (INT);
	}
	if (f != std::string::npos && fl != std::string::npos && isFloat(str, len, fl))
		return (FLOAT);
	if (f == std::string::npos && fl != std::string::npos)
		return (DOUBLE);
	return (INVALID);
}