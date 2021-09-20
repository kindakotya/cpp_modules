/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:21:42 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/20 04:21:20 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include "Data.hpp"
#include <iostream>

int	main(){
	{
		Data*		kek = new Data;
		uintptr_t	lol;

		std::cout << "Heap test:" << std::endl
				<< "Data*		kek = new Data;" << std::endl
				<< "uintptr_t	lol;" << std::endl
				<< "kek == " << kek << std::endl
				<< "lol = serialize(kek);" << std::endl;
		lol = serialize(kek);
		std::cout << "lol == " << lol << std::endl
				<< "kek = deserialize(lol);" << std::endl;
		kek = deserialize(lol);
		std::cout << "kek == " << kek << std::endl
				<< "kek->c == " << kek->c << ", kek->n == " << kek->n
				<< ", kek->str == " << kek->str << std::endl;
	}
	{
		Data		kek;
		uintptr_t	lol;

		std::cout << std::endl << "Stack test:" << std::endl
				<< "Data		kek;" << std::endl
				<< "uintptr_t	lol;" << std::endl
				<< "&kek == " << &kek << std::endl
				<< "lol = serialize(&kek);" << std::endl;
		lol = serialize(&kek);
		std::cout << "lol == " << lol << std::endl
				<< "kek = *deserialize(lol);" << std::endl;
		kek = *deserialize(lol);
		std::cout << "&kek == " << &kek << std::endl
				<< "kek.c == " << kek.c << ", kek.n == " << kek.n
				<< ", kek.str == " << kek.str << std::endl;
	}
	return 0;
}
