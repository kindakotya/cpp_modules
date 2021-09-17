/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 02:42:29 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/17 22:47:28 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(){
	_type = "WrongCat";
	std::cout << "WrongCat has born." << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat has died." << std::endl;
}

// void	WrongCat::makeSound() const{
// 	std::cout << "Meow." << std::endl;
// }

WrongCat::WrongCat(WrongCat const & obj){
	*this = obj;
}

WrongCat&	WrongCat::operator=(WrongCat const & obj){
	std::cout << "Cat has born." << std::endl;
	_type = obj._type;
	return *this;
}
