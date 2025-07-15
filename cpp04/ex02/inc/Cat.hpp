/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:23:52 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 20:08:58 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
			Brain *_brain;
	public:
			Cat();
			Cat(const Cat &copy);
			virtual ~Cat();
			Cat	&operator=(const Cat &copy);

			void	makeSound(void)const;
			void	setIdeas(size_t i, std::string idea);
			void	getIdeas(void)const;
};

#endif