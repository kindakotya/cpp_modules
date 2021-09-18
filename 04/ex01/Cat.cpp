/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 02:42:29 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 05:05:29 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(){
	_type = "Cat";
	std::cout << "Cat has born." << std::endl;
	_brain = new Brain();
}

Cat::~Cat(){
	delete _brain;
	std::cout << "Cat has died." << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "Meow." << std::endl;
}

Cat::Cat(Cat const & obj){
	*this = obj;
}

Cat&	Cat::operator=(Cat const & obj){
	std::cout << "Cat has born." << std::endl;
	_type = obj._type;
	_brain = new Brain(*obj._brain);
	return *this;
}
