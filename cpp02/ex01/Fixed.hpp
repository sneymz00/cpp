/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:40:10 by camurill          #+#    #+#             */
/*   Updated: 2025/07/12 18:40:13 by camurill         ###   ########.fr       */
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
			Fixed(Fixed const &copy);
			Fixed &operator=(Fixed const &copy);
			int getRawBits(void) const;
			void setRwaBits(int const raw);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &nbr);
float			ft_pow(float base, int nbr);


#endif
