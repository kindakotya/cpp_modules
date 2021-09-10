/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:21:42 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/10 05:39:17 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include "Data.hpp"
#include <iostream>

int	main(){
	{
		Data*		kek = new Data;
		uintptr_t	lol;

		std::cout << "Heap test:" << std::endl;
		std::cout << "Data*		kek = new Data;" << std::endl <<
			"uintptr_t	lol;" << std::endl;
		std::cout << "kek == " << kek << std::endl;
		std::cout << "lol = serialize(kek);" << std::endl;
		lol = serialize(kek);
		std::cout << "lol == " << lol << std::endl;
		std::cout << "kek = deserialize(lol);" << std::endl;
		kek = deserialize(lol);
		std::cout << "kek == " << kek << std::endl;
	}
	{
		Data		kek;
		uintptr_t	lol;

		std::cout << std::endl << "Stack test:" << std::endl;
		std::cout << "Data		kek = new Data;" << std::endl <<
			"uintptr_t	lol;" << std::endl;
		std::cout << "&kek == " << &kek << std::endl;
		std::cout << "lol = serialize(&kek);" << std::endl;
		lol = serialize(&kek);
		std::cout << "lol == " << lol << std::endl;
		std::cout << "kek = *deserialize(lol);" << std::endl;
		kek = *deserialize(lol);
		std::cout << "&kek == " << &kek << std::endl;
	}
	return 0;
}
