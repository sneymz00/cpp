/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:23:52 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 18:59:40 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
	private:
			//
	public:
			Cat();
			Cat(const Cat &copy);
			virtual ~Cat();
			Cat	&operator=(const Cat &copy);

			void	makeSound(void)const;
};

#endif