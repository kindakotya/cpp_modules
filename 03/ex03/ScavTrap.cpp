/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:00:01 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/25 01:16:48 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "The default ScavTrap has born!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "ScavTrap " << _name << " has born with " << _hp << " HP "
			<< _ep << " EP " << _ad << " AD!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has destroyed!" << std::endl;
}


void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
}
ScavTrap	ScavTrap::operator=(ScavTrap const &obj)
{
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
	return *this;
}
