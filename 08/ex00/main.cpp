/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 01:26:16 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/12 02:01:34 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int	main(){
	std::cout << "Vector test:" << std::endl;
	std::vector<int> v;

	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	std::cout << "std::vector<int> v;" << std::endl << "v.push_back(1);"
			<< std::endl << "v.push_back(3);" << std::endl << "v.push_back(2);"
			<< std::endl << "*easyfind(v, 3) -> " << *easyfind(v, 3)
			<< std::endl << "*(++easyfind(v, 3)) -> " << *(++easyfind(v, 3))
			<< std::endl << std::endl;
	std::cout << "Vector exception test:" << std::endl;
	try{
		easyfind(v, 10);
	}
	catch (std::exception & e){
		std::cout << "easyfind(v, 10) -> " << e.what() << std::endl << std::endl;;
	}

	std::cout << "List test:" << std::endl;
	std::list<int> l;

	l.push_back(1);
	l.push_back(3);
	l.push_back(2);
	std::cout << "std::list<int> l;" << std::endl << "l.push_back(1);"
			<< std::endl << "l.push_back(3);" << std::endl << "l.push_back(2);"
			<< std::endl << "*easyfind(l, 3) -> " << *easyfind(l, 3)
			<< std::endl << "*(++easyfind(l, 3)) -> " << *(++easyfind(l, 3))
			<< std::endl << std::endl;
	std::cout << "List exception test:" << std::endl;
	try{
		easyfind(l, 10);
	}
	catch (std::exception & e){
		std::cout << "easyfind(l, 10) -> " << e.what() << std::endl;
	}
	return 0;
}
