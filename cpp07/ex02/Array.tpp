/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:59:15 by camurill          #+#    #+#             */
/*   Updated: 2025/10/24 14:36:14 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array(): _arr(NULL), _size(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n) 
{
}

template<typename T>
Array<T>::Array(Array const &copy): _arr(new T[copy._size]), _size(copy._size)
{
	for (unsigned int i = 0; i < copy._size; i++)
		_arr[i] = copy._arr[i];
}

template<typename T>
Array<T>::~Array()
{
	delete [] _arr;
}

template<typename T>
Array<T> &Array<T>::operator=(Array const &copy)
{
	if (this != copy)
	{
		delete [] _arr;
		_size = copy._size;
		_arr = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = copy._arr[i];
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw OutofException();
	return (_arr[i]);
}

template<typename T>
T const	&Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw OutofException();
	return (_arr[i]);
}

template<typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}

template<typename T>
const char *Array<T>::OutofException::what() const throw()
{
	return ("Index out of bounds");
}

#endif