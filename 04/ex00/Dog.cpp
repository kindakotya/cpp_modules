/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 02:43:38 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/01 03:05:38 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(){
	_type = "Dog";
	std::cout << "Dog has born." << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog has died." << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;
}
