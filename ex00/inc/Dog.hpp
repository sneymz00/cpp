/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:32:26 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 18:59:32 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	private:
			//
	public:
			Dog();
			Dog(const Dog &copy);
			virtual ~Dog();
			Dog	&operator=(const Dog &copy);

			void	makeSound(void)const;
};

#endif