/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:12:57 by nikitadorof       #+#    #+#             */
/*   Updated: 2025/10/21 13:56:22 by nikitadorof      ###   ########.fr       */
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
typename T::itearetor easyfind(T &container, int n)
{
	typename T::iterator i;

	i = std::find(container.begin(), constainer.end(), n);
	if (i == container.end())
		throw NotFoundException;
	return (i);
}
#endif
