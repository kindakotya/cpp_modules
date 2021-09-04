/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:08:35 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/04 20:58:07 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		_store[i] = 0;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		if (_store[i])
			delete _store[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const & obj){
	for (int i = 0; i < 4; i++){
		if (obj._store[i])
			this->_store[i] = obj._store[i]->clone();
	}
}

MateriaSource	MateriaSource::operator=(MateriaSource const & obj){
	return MateriaSource(obj);
}

void MateriaSource::learnMateria(AMateria* mat){
	for (int i = 0; i < 4; i++){
		if (!_store[i]){
			_store[i] = mat->clone();
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (_store[i] && _store[i]->getType() == type){
			AMateria* mat = _store[i]->clone();
			return mat;
		}
	}
	return 0;
}
