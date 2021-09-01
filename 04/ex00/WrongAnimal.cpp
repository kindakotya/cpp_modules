/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 02:37:28 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/01 03:20:41 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal has born." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj){
	std::cout << "WrongAnimal has born." << std::endl;
	this->_type = obj._type;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal has died." << std::endl;
}

WrongAnimal	WrongAnimal::operator=(WrongAnimal const &obj){
	return WrongAnimal(obj);
}

std::string	WrongAnimal::getType() const{
	return _type.empty() ? "" : _type;
}

void	WrongAnimal::makeSound() const{
	std::cout << "Very wrong sound!" << std::endl;
}
