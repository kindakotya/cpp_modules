/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 02:42:29 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/01 04:07:11 by gmayweat         ###   ########.fr       */
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
