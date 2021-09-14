/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 03:27:24 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/13 03:46:42 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <vector>
#include <exception>

#include <iostream>

class Span
{
private:
	unsigned int _N;
	std::vector<int> _vect;
	Span();
public:
	Span(unsigned int N) : _N(N){}
	Span(Span const & obj){*this = obj;}
	~Span(){}

	class AlreadyNSpansException : public std::exception{
		public: const char*	what()const throw(){return "AlreadyNSpansException (Span)";}
	};
	class LessThanTwoSpansException : public std::exception{
		public: const char*	what()const throw(){return "LessThanTwoSpansException (Span)";}
	};
	class NoSpanToFindException : public std::exception{
		public: const char*	what()const throw(){return "NoSpanToFindException (Span)";}
	};

	template<class T>
	void			addNumber(T begin, T const & end);
	void			addNumber(int n);
	int				shortestSpan()const;
	int				longestSpan()const;
	unsigned int	size()const{return _N;}

	Span&	operator=(Span const & obj);
};

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

template <class InputIt>
void	Span::addNumber(InputIt begin, InputIt const & end){
	if (_vect.size() + std::distance(begin, end) > _N)
		throw AlreadyNSpansException();
	_vect.insert(_vect.end(), begin, end);
}

int	Span::shortestSpan()const{
	if (_N < 2 || _vect.size() < 2)
		throw LessThanTwoSpansException();
	std::vector<int>::const_iterator	it;
	it = std::min_element(_vect.begin(), _vect.end());
	if (it == _vect.end())
		throw NoSpanToFindException();
	return *it;
}

int	Span::longestSpan()const{
	if (_N < 2 || _vect.size() < 2)
		throw LessThanTwoSpansException();
	std::vector<int>::const_iterator	it;
	it = std::max_element(_vect.begin(), _vect.end());
	if (it == _vect.end())
		throw NoSpanToFindException();
	return *it;
}

#endif
