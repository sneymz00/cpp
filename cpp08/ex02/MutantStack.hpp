/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:15:08 by camurill          #+#    #+#             */
/*   Updated: 2025/10/24 17:39:01 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_

# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <exception>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
			MutantStack();
			MutantStack(const MutantStack& copy);
			MutantStack	&operator=(const MutantStack& copy);
			~MutantStack();

			typedef typename std::stack<T>::container_type::iterator iterator;
			typedef typename std::stack<T>::container_type::const_iterator const_iterator;
			typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
			typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

			iterator begin();
			iterator end();

			const_iterator begin() const;
			const_iterator end() const;

			reverse_iterator rbegin();
			reverse_iterator rend();
			
			const_reverse_iterator rbegin() const;
			const_reverse_iterator rend() const;
};
# include "MutantStack.tpp"

#endif