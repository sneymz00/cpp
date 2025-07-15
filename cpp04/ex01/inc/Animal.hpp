/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:05:56 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 18:51:42 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
			std::string _type;
	public:
			Animal();
			Animal(const Animal &copy);
			Animal &operator=(const Animal& copy);
			virtual ~Animal();

			virtual void	makeSound()const;
			std::string		getType(void)const;
};

#endif