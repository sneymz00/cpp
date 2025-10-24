/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:12:57 by nikitadorof       #+#    #+#             */
/*   Updated: 2025/10/24 16:56:28 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

class NotFoundException : public std::exception
{
	public:
		virtual const char * what() const throw()
		{
			return ("Number not found");
		}
};

template<typename T>
typename T::iterator easyfind(T &container, int n)
{
	typename T::iterator i;

	i = std::find(container.begin(), container.end(), n);
	if (i == container.end())
		throw NotFoundException();
	return (i);
}
#endif