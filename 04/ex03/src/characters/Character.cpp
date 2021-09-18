/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:55:16 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 04:38:09 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>


Character::Character(std::string const & name){
	bzero(_spells, sizeof(_spells));
	_name = name;
}

Character::Character(Character const & obj){
	*this = obj;
}

Character&	Character::operator=(Character const & obj){
	_name = obj._name;
	for(int i = 0; i < 4; i++){
		if (obj._spells[i])
			_spells[i] = obj._spells[i]->clone();
	}
	return (*this);
}

Character::~Character(){
	for (int i = 0; i < 4; i++){
		if (_spells[i])
			delete _spells[i];
	}
}

std::string const & Character::getName() const{
	return _name;
}

void Character::equip(AMateria* m){
	int i = 0;
	while (i < 4){
		if (!_spells[i]){
			_spells[i] = m->clone();
			return ;
		}
		++i;
	}
}

void Character::unequip(int idx){
	if (_spells[idx]){
		delete _spells[idx];
		_spells[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target){
	if (_spells[idx]){
		_spells[idx]->use(target);
	}
}
