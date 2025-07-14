/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:48:29 by camurill          #+#    #+#             */
/*   Updated: 2025/07/12 17:21:02 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed()
{
	std::cout << "Fixed object created" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Fixed object destroyed" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Fixed object copied" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assigment operator called" << std::endl;
	this->_value = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits funtion is called" << std::endl;
	return (this->_value);
}

void Fixed::setRwaBits(const int row)
{
	this->_value = row;
}
