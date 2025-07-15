/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:05:56 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 20:56:34 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <cstdio>
# include <cstdlib>

class Animal
{
	protected:
			std::string _type;
			Animal();
	public:
			Animal(const Animal &copy);
			Animal &operator=(const Animal& copy);
			virtual ~Animal();

			virtual void	makeSound()const = 0;
			std::string		getType(void)const;
};

#endif