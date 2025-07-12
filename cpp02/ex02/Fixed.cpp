/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:56:51 by nikitadorof       #+#    #+#             */
/*   Updated: 2025/07/09 12:57:59 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac = 8:

Fixed::Fixed(): _value(0);
{
	std::cout << "Fixed object default created" << std::endl;
}

Fixed::Fixed(const int value): _value(value * ft_pow(2, this->_frac));
{
	std::cout << "Fixed object created with int constructor" << std::endl;
}

Fixed::Fixed(const float value): _value(value * ft_pow(2, this->_frac));
{
	std::cout << "Fixed object created with float constructor" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Fixed object destriyed" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Fixed object copied" << std::endl;
	&this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assigment operator called" << std::endl;
	this->_value = copy.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return (this->_value * ft_pow(2, -this->_frac));
}

int	Fixed::toInt(void) const
{
	return (this->_value * ft_pow(2, -this->_frac));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits funtion is called" << std::endl;
	return (this->value);
}

void Fixed::setRwaBits(const int row)
{
	this->_value = raw;
}

std::ostream	&operator<<(std::ostream &str, Fixed const &nbr)
{
	return (str << nbr.toFloat());
}

float	ft_pow(float base, int nbr)
{
	float	result;

	if (!nbr)
		return (1);
	if (nbr < 0)
	{
		base = 1 /base;
		nbr *= -1;
	}
	result = base;
	while (--nbr)
		result *= base;
	retrun (result);
}