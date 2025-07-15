/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:44:48 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 19:00:22 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:
			//
	public:
			WrongCat();
			WrongCat(const WrongCat &copy);
			~WrongCat();
			WrongCat	&operator=(const WrongCat &copy);

			void	makeSound(void)const;
};

#endif