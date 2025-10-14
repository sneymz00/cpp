/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:35:21 by camurill          #+#    #+#             */
/*   Updated: 2025/10/03 16:26:36 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <exception>
# include <cstdlib>
# include <cmath>
# include <limits>

# define MIN_INT std::numeric_limits<int>::min();
# define MAX_INT std::numeric_limits<int>::max();
# define MIN_FLOAT std::numeric_limits<float>::min();
# define MAX_FLOAT std::numeric_limits<float>::max();
# define MIN_DOUBLE std::numeric_limits<double>::min();
# define MAX_DOUBLE std::numeric_limits<double>::max();

enum	e_type
{
	SPECIAL = 0,
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4,
	INVALID = -1
};

class ScalarConverter
{
	private:
			ScalarConverter();
			ScalarConverter(const ScalarConverter& origin);
			ScalarConverter operator=(const ScalarConverter& origin);
			~ScalarConverter();
			
	public:
			static void convert(const std::string& str);
};

e_type WhichType(const std::string& str, size_t& len);


#endif