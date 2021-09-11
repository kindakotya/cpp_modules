/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 06:06:10 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/11 20:28:46 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

static void	leaks_test(){
	Array<char>	a(100);
	a[0] = 'a';
}

int main(){
	Array<char> a(5);
	std::cout << "Array<char> a(5) with size == " << a.size() << std::endl
			<< "Out or range test:" << std::endl << "a[6] -> ";
	try{
		a[6];
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "Alphabet test:" << std::endl;
	for (int i = 0; i < 5; i++){
		a[i] = 'a' + i;
		std::cout << "a[" << i << "] == " << a[i] << std::endl;
	}

	Array<int>	b(1);
	std::cout << std::endl << "Array<int>	b(1) with size == " << b.size() << std::endl
			<< "b[0] == " << b[0] << std::endl << "b[0] = 42;" << std::endl;
	b[0] = 42;
	std::cout << "b[0] == " << b[0] << std::endl;
	leaks_test();
	// getchar();
	return 0;
}
