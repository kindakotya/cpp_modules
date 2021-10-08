/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 03:27:24 by gmayweat          #+#    #+#             */
/*   Updated: 2021/10/08 03:11:03 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <exception>

class Span
{
private:
	unsigned int		_N;
	std::vector<int>	_vect;
	Span();
public:
	Span(unsigned int N);
	Span(Span const & obj);
	~Span();

	class AlreadyNSpansException : public std::exception{
		public: const char*	what()const throw(){return "AlreadyNSpansException (Span)";}
	};
	class LessThanTwoSpansException : public std::exception{
		public: const char*	what()const throw(){return "LessThanTwoSpansException (Span)";}
	};
	class SpanOutOfRangeException : public std::exception{
		public: const char*	what()const throw(){return "SpanOutOfRangeException (Span)";}
	};

	void			addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator const & end);
	void			addNumber(int n);
	int				shortestSpan()const;
	int				longestSpan()const;
	unsigned int	size()const;

	Span&	operator=(Span const & obj);
	int		operator[](unsigned int i);
};


#endif
