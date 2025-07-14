/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:40:49 by camurill          #+#    #+#             */
/*   Updated: 2025/07/12 18:40:51 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int					_value;
			static const int	_frac;
	public:
			Fixed(void);
			Fixed(const int value);
			Fixed(const float value);
			~Fixed();
			float toFloat(void) const;
			int   toInt(void) const;
			Fixed(Fixed const &copy);
			Fixed &operator=(Fixed const &copy);
			int getRawBits(void) const;
			void setRwaBits(int const raw);
			//operators >=<!
			bool	operator>(Fixed fixed) const;
			bool	operator<(Fixed fixed) const;
			bool	operator<=(Fixed fixed) const;
			bool	operator>=(Fixed fixed) const;
			bool	operator==(Fixed fixed) const;
			bool	operator!=(Fixed fixed) const;
			//operator +-*/
			float	operator+(Fixed fixed) const;
			float	operator-(Fixed fixed) const;
			float	operator*(Fixed fixed) const;
			float	operator/(Fixed fixed) const;
			//ppre-increment
			Fixed	operator++();
			Fixed	operator--();
			//post increment
			Fixed	operator++(int);
			Fixed	operator--(int);
			//Funtions
			static Fixed	&min(Fixed &f, Fixed &s);
			static const Fixed	&min(const Fixed &f, const Fixed &s);
			static Fixed	&max(Fixed &f, Fixed &s);
			static const Fixed	&max(const Fixed &f, const Fixed &s);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &nbr);

#endif
