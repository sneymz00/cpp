/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:58:56 by camurill          #+#    #+#             */
/*   Updated: 2025/07/08 20:31:19 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define GBD "\001\033[0;39m\002"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;93m\002"
# define GREEN "\001\033[1;92m\002"
# define GRAY "\001\033[1;90m\002"

class Harl
{
	private:
			void debug();
			void error();
			void info();
			void warming();
	public:
			Harl();
			~Harl();
			void complain(std::string str);
};

#endif
