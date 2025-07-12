/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:25:37 by nikitadorof       #+#    #+#             */
/*   Updated: 2025/07/09 12:58:34 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
			Fixed(Fixed const &copy)
			Fixed &operator=(Fixed const &copy)
			int getRawBits(void) const;
			void setRwaBits(int const raw);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &nbr)
float			ft_pow(float base, int nbr);


#endif