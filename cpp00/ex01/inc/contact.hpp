/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:07:33 by camurill          #+#    #+#             */
/*   Updated: 2025/06/30 19:26:19 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <limits>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkSecret;
	public:
		Contact(void);
		~Contact(void);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNick() const;
		std::string getPhoneNumber() const;
		std::string getDarkSecret() const;
		void		set_FirstName(std::string str);
		void		set_LastName(std::string str);
		void		set_Nick(std::string str);
		void		set_Phone(std::string str);
		void		set_secret(std::string str);
};

#endif
