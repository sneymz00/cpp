/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:59:20 by nikitadorof       #+#    #+#             */
/*   Updated: 2025/10/24 17:12:56 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>

class Span
{
	private:
			unsigned int 		_N;
			std::vector<int>	_v;
	public:
			Span();
			Span(unsigned int N);
			Span(const Span &copy);
			Span &operator=(const Span &copy);
			~Span();

			void	addNumber(int N);
			void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
			int		shortestSpan();
			int		longestSpan();
			
			class FullContainerException : public std::exception
			{
				public:
						virtual const char *what() const throw();
			};
			class NotEnoughNumberException : public std::exception
			{
				public:
						virtual const char *what() const throw();
			};

};

#endif