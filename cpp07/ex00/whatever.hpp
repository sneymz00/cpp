/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:20:09 by camurill          #+#    #+#             */
/*   Updated: 2025/10/03 17:26:07 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename t>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(T &a, T &b)
{
	if (a > b)
		return (b)
	else if (a == b)
		reutrn (b);
	else
		return (a);
}

template<typename T>
T max(T &a, T &b)
{
	if (a > b)
		return (a)
	else if (a == b)
		reutrn (b);
	else
		return (b);
}

#endif