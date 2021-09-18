/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 02:37:28 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 05:23:26 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(){
	std::cout << "Animal has born." << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal has died." << std::endl;
}

std::string	Animal::getType() const{
	return _type.empty() ? "" : _type;
}

Animal::Animal(Animal const & obj){
	*this = obj;
}

Animal&	Animal::operator=(Animal const & obj){
	std::cout << "Animal has born." << std::endl;
	this->_type = obj._type;
	return *this;
}
