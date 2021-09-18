/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 03:46:08 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 05:07:01 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(){
	std::cout << "Pinky, are you pondering what I'm pondering?" << std::endl;
}

Brain::~Brain(){
	std::cout << "The same thing we do every night,"
			" Pinky. Try to take over the world." << std::endl;
}

Brain::Brain(Brain const & obj){
	*this = obj;
}

Brain&	Brain::operator=(Brain const & obj){
	for (int i = 0; i < 99; i++){
		_ideas[i] = obj._ideas[i];
	}
	std::cout << "Pinky, are you pondering what I'm pondering?" << std::endl;
	return *this;
}
