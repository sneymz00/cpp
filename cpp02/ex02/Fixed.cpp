/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:40:44 by camurill          #+#    #+#             */
/*   Updated: 2025/07/12 19:05:02 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed(): _value(0)
{
	//std::cout << "Fixed object default created" << std::endl;
}

Fixed::Fixed(const int value)
{
	//std::cout << "Fixed object created with int constructor" << std::endl;
	this->_value = value << this->_frac;
}

Fixed::Fixed(const float value)
{
	//std::cout << "Fixed object created with float constructor" << std::endl;
	this->_value = roundf(value * (1 << this->_frac));
}

Fixed::~Fixed()
{
	//std::cout << "Fixed object destruyed" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	//std::cout << "Fixed object copied" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	//std::cout << "Assigment operator called" << std::endl;
	if (this != &copy)
		this->_value = copy.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_frac));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_frac);
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRwaBits(const int row)
{
	this->_value = row;
}

std::ostream	&operator<<(std::ostream &str, Fixed const &nbr)
{
	return (str << nbr.toFloat());
}

//Comparison operators

bool	Fixed::operator>(Fixed fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

//Arithmetic 
float	Fixed::operator+(Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

//Pre increment
Fixed	Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->_value--;
	return (*this);
}

//Post incremennt
Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_value;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_value;
	return (tmp);
}

//Funtions min, max
Fixed &Fixed::min(Fixed &f, Fixed &s)
{
	if (f.toFloat() <= s.toFloat())
		return (f);
	else
		return (s);
}

const Fixed &Fixed::min(const Fixed &f, const Fixed &s)
{
	if (f.toFloat() <= s.toFloat())
		return (f);
	else
		return (s);
}

Fixed &Fixed::max(Fixed &f, Fixed &s)
{
	if (f.toFloat() >= s.toFloat())
		return (f);
	else
		return (s);
}

const Fixed &Fixed::max(const Fixed &f, const Fixed &s)
{
	if (f.toFloat() >= s.toFloat())
		return (f);
	else
		return (s);
}
