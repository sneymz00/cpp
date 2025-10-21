/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:09:42 by nikitadorof       #+#    #+#             */
/*   Updated: 2025/10/21 14:33:11 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		_N = copy._N;
		_v = copy._v;
	}
}

Span::~Span()
{
}

void	Span::addNumber(int n)
{
	if (_v.size() >= _N)
		throw FullContainerException();
	_v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_v.size() + std::distance(begin, end) > _N)
		throw FullContainerException();
	_v.insert(_v.end(), begin, end);
}

int	Span::shortestSpan()
{
	if (_v.size() <= 1)
		throw NotEnoughNumberException();
	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	int m = tmp[1] - tmp[0];
	for (unsigned int i =  1; i < tmp.size(); i++)
	{
		if (tmp[i] - tmp[i - 1] < m)
			m = tmp[i] - tmp[i -1];
	}
	return (m);
}

int	Span::longestSpan()
{
	if (_v.size() <= 1)
		throw NotEnoughNumberException();
	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

const char *Span::FullContainerException::what() const throw()
{
	return ("Cointainer ir full");
}

const char *Span::NotEnoughNumberException::what() const throw()
{
	return ("Not enough number in container");
}