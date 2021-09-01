/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 03:46:08 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/01 03:50:18 by gmayweat         ###   ########.fr       */
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
