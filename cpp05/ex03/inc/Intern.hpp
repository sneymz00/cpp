/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:12:05 by camurill          #+#    #+#             */
/*   Updated: 2025/09/23 15:18:15 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern
{
	private:

	public:
			Intern();
			Intern(const Intern& src);
			Intern& operator=(const Intern& src);
			~Intern();

			AForm *makeForm(const std::string f_name, const std::string f_type);
};

#endif