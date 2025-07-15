/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:38:37 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 19:26:44 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
			std::string _type;
	public:
			WrongAnimal();
			WrongAnimal(const WrongAnimal &copy);
			WrongAnimal &operator=(const WrongAnimal& copy);
			virtual ~WrongAnimal();

			void	makeSound()const;
			std::string getType(void)const;
};

#endif