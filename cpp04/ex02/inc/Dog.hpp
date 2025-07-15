/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:32:26 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 20:10:22 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
			Brain *_brain;
	public:
			Dog();
			Dog(const Dog &copy);
			virtual ~Dog();
			Dog	&operator=(const Dog &copy);

			void	makeSound(void)const;
			void	setIdeas(size_t i, std::string idea);
			void	getIdeas(void)const;
};

#endif