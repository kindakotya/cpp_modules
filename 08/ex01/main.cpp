/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 03:40:54 by gmayweat          #+#    #+#             */
/*   Updated: 2021/10/08 03:14:28 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <cmath>


int	main(){
	{
		std::cout << "1000000 elems test:" << std::endl;
		Span span(1000000);
		std::cout << "Span with size " << span.size() << std::endl;
		std::vector<int> l;
		std::cout << "std::vector<int> l" << std::endl;
		for (size_t i = 0; i < 1000000; i++){
			l.push_back(rand() % 1000000);
			// std::cout << "l[" << i << "] -> " << l[i] << '\t';
		}
		std::cout << "span.addNumber(l[0]);" << std::endl
				<< "span.addNumber(l.begin() + 1, l.end());" << std::endl;
		span.addNumber(l[0]);
		span.addNumber(l.begin() + 1, l.end());
		for (size_t i = 0; i < 1000000; i++){
			// std::cout << "span[" << i << "] -> " << span[i] << '\t';
		}
		std::cout << std::endl << "span.longestSpan() -> " << span.longestSpan() << std::endl;
		std::cout << "span.shortestSpan() -> " << span.shortestSpan() << std::endl;
	}
	{
		std::cout << "10000 elems test:" << std::endl;
		Span span(10000);
		std::cout << "Span with size " << span.size() << std::endl;
		std::vector<int> l;
		std::cout << "std::vector<int> l" << std::endl;
		for (size_t i = 0; i < 10000; i++){
			l.push_back(rand() % 10000);
			std::cout << "l[" << i << "] -> " << l[i] << '\t';
		}
		std::cout << "span.addNumber(l[0]);" << std::endl
				<< "span.addNumber(l.begin() + 1, l.end());" << std::endl;
		span.addNumber(l[0]);
		span.addNumber(l.begin() + 1, l.end());
		for (size_t i = 0; i < 10000; i++){
			std::cout << "span[" << i << "] -> " << span[i] << '\t';
		}
		std::cout << std::endl << "span.longestSpan() -> " << span.longestSpan() << std::endl;
		std::cout << "span.shortestSpan() -> " << span.shortestSpan() << std::endl;
	}
	{
		std::cout << std::endl << "10 elems test:" << std::endl;
		Span span(10);
		std::cout << "Span with size " << span.size() << std::endl;
		std::vector<int> l;
		std::cout << "std::vector<int> l" << std::endl;
		for (size_t i = 0; i < 10; i++){
			l.push_back(rand() % 10);
			std::cout << "l[" << i << "] -> " << l[i] << std::endl;
		}
		std::cout << "span.addNumber(l[0]);" << std::endl
				<< "span.addNumber(l.begin() + 1, l.end());" << std::endl;
		span.addNumber(l[0]);
		span.addNumber(l.begin() + 1, l.end());
		for (size_t i = 0; i < 10; i++){
			std::cout << "span[" << i << "] -> " << span[i] << std::endl;
		}
		std::cout << "span.longestSpan() -> " << span.longestSpan() << std::endl;
		std::cout << "span.shortestSpan() -> " << span.shortestSpan() << std::endl;
	}
	{
		std::cout << std::endl << "Exceptions test:" << std::endl;
		Span span(2);
		std::cout << "Span with size " << span.size() << std::endl;
		try{
			std::cout << "span.longestSpan() -> ";
			std::cout << span.longestSpan() << std::endl;
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
		try{
			std::cout << "span.shortestSpan() -> ";
			std::cout << span.shortestSpan() << std::endl;
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl << std::endl;
		}
		std::vector<int> l;
		std::cout << "std::vector<int> l" << std::endl;
		for (size_t i = 0; i < 3; i++){
			l.push_back(rand() % 10);
			std::cout << "l[" << i << "] -> " << l[i] << std::endl;
		}
		try{
			std::cout << "span.addNumber(l.begin(), l.end()) -> ";
			span.addNumber(l.begin(), l.end());
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl << std::endl;
		}
		try{
			for (int i = 0; i < 3; i++){
				std::cout << "span.addNumber(l[" << i << "] -> ";
				span.addNumber(l[i]);
				std::cout << "OK!" << std::endl;
			}
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl << std::endl;
		}
		try{
			std::cout << "span[1] -> " << span[1] << std::endl;
			std::cout << "span[2] -> " << span[2] << std::endl;
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl << std::endl;
		}
	}
	{
		std::cout << std::endl << "Subject test:" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return 0;
}
