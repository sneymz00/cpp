/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:57:47 by camurill          #+#    #+#             */
/*   Updated: 2025/10/24 14:38:54 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <time.h>

template <typename T>
class Array
{
	private:
			T				*_arr;
			unsigned int	_size;
	public:
			Array();
			Array(unsigned int n);
			Array(Array const &copy);
			~Array();

			//Operators
			Array			&operator=(Array const &copy);
			T				&operator[](unsigned int i);
			T const			&operator[](unsigned int i) const;

			//methods
			unsigned int	size() const;

			//Exceptions
			class OutofException : public std::exception
			{
				public:
					virtual const char *what() const throw();
			};
};
# include "Array.tpp"


#endif