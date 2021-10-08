/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:45:57 by gmayweat          #+#    #+#             */
/*   Updated: 2021/10/08 03:13:17 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include "span.hpp"

Span::Span() : _N(0){}
Span::Span(unsigned int N) : _N(N){}
Span::Span(Span const & obj){*this = obj;}
Span::~Span(){}
unsigned int	Span::size()const{return _N;}

Span&	Span::operator=(Span const & obj){
	_N = obj._N;
	_vect = obj._vect;
	return *this;
}

void	Span::addNumber(int n){
	if (_vect.size() == _N)
		throw AlreadyNSpansException();
	_vect.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator const & end){
	if (_vect.size() + std::distance(begin, end) > _N)
		throw AlreadyNSpansException();
	_vect.insert(_vect.end(), begin, end);
}

int	Span::shortestSpan()const{
	if (_N < 2 || _vect.size() < 2)
		throw LessThanTwoSpansException();
	std::vector<int> sorted(_vect);
	std::sort(sorted.begin(), sorted.end());
	int kek = sorted[1] - sorted[0];
	for (size_t i = 1; i < sorted.size(); i++){
		if (sorted[i] - sorted[i - 1]  < kek)
			kek = sorted[i] - sorted[i - 1];
	}
	return kek;
}

int	Span::longestSpan()const{
	if (_N < 2 || _vect.size() < 2)
		throw LessThanTwoSpansException();
	return *std::max_element(_vect.begin(), _vect.end())
			- *std::min_element(_vect.begin(), _vect.end());
}

int	Span::operator[](unsigned int i){
	if (i >= _vect.size())
		throw SpanOutOfRangeException();
	return (_vect[i]);
}
