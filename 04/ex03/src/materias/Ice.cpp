/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:12:32 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/04 17:12:48 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Ice.hpp"

Ice::Ice(){
	_type = "ice";
}

Ice::~Ice(){}

AMateria*	Ice::clone() const{
	return new Ice();
}

void Ice::use(ICharacter& target){
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
