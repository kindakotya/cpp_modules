/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 02:37:28 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/01 04:21:56 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(){
	std::cout << "Animal has born." << std::endl;
}

// Animal::Animal(Animal const &obj){
// 	std::cout << "Animal has born." << std::endl;
// 	this->_type = obj._type;
// }

Animal::~Animal(){
	std::cout << "Animal has died." << std::endl;
}

// Animal	Animal::operator=(Animal const &obj){
// 	return Animal(obj);
// }

std::string	Animal::getType() const{
	return _type.empty() ? "" : _type;
}

void	Animal::makeSound() const{
	std::cout << "Zhivotniye zwuki!" << std::endl;
}
