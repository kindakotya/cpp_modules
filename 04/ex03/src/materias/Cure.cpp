/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:11:56 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 04:43:08 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure(){
	_type = "cure";
}

Cure::Cure(Cure const & obj){
	*this = obj;
}

Cure&	Cure::operator=(Cure const & obj){
	_type = obj._type;
	return *this;
}

Cure::~Cure(){}

AMateria*	Cure::clone() const{
	return new Cure();
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
