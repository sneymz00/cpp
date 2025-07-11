/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:46:52 by camurill          #+#    #+#             */
/*   Updated: 2025/07/09 12:58:20 by nikitadorof      ###   ########.fr       */
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
			Fixed();
			~Fixed();
			Fixed(Fixed const &copy)
			Fixed &operator=(Fixed const &copy)
			int getRawBits(void) const;
			void setRwaBits(int const raw);
};

#endif