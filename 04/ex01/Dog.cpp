/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 02:43:38 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 05:05:03 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(){
	_type = "Dog";
	std::cout << "Dog has born." << std::endl;
	_brain = new Brain();
}

Dog::~Dog(){
	delete _brain;
	std::cout << "Dog has died." << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;
}

Dog::Dog(Dog const & obj){
	*this = obj;
}

Dog&	Dog::operator=(Dog const & obj){
	std::cout << "Dog has born." << std::endl;
	_type = obj._type;
	_brain = new Brain(*obj._brain);
	return *this;
}
