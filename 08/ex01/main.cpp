/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 03:40:54 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/13 03:52:00 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <cmath>


int	main(){
	Span span(10000);
	std::cout << span.size() << std::endl;
	std::list<int> l;
	for (size_t i = 0; i < 10000; i++)
		l.push_back(rand() % 10000);

	span.addNumber(l.begin(), l.end());
	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;
	return 0;
}
