/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:11:52 by camurill          #+#    #+#             */
/*   Updated: 2025/06/30 20:55:23 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include "utils.hpp"
# include <iostream>
# include <limits>

class Phonebook
{
	private:
			Contact	contacts[8];
			int		index;

	public:
		Phonebook();
		~Phonebook(void);
		void	add_contact(void);
		void	search_contact(void);
		void	print_Phonebook(Contact cont);
		Contact	get_contact(int	index);
};

#endif
