/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:39:55 by camurill          #+#    #+#             */
/*   Updated: 2025/07/15 19:55:07 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
			std::string _ideas[100];
	public:
			Brain();
			Brain(const Brain &copy);
			virtual ~Brain();
			Brain &operator=(const Brain &copy);

			const std::string getIdea(size_t i)const;
			const std::string *getIdeaAdress(size_t i)const;
			void setIdea(size_t i, std::string idea);
};

#endif