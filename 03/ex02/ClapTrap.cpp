/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:27:43 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/14 21:39:53 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "The default ClapTrap has born!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hp = 10;
	_ep = 10;
	_ad = 0;
	std::cout << "ClapTrap " << _name << " has born with " << _hp << " HP "
			<< _ep << " EP " << _ad << " AD!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has destroyed!" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing "
			<< _ad << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hp = amount > _hp ? 0 : _hp - amount;
	std::cout << "ClapTrap " << _name << " has taken " << amount
			<< " points of damage! And now he has " << _hp << "HP!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_hp = (u_int64_t)amount + (u_int64_t)_hp > UINT32_MAX ? UINT32_MAX : _hp + amount;
	std::cout << "ClapTrap " << _name << " been repaired for " << amount
			<< " HP! And now he has " << _hp << "HP!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &obj)
{
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
	return *this;
}
