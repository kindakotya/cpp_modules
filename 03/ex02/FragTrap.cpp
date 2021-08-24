/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:00:15 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/25 01:13:54 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "FragTrap " << _name << " has born with " << _hp << " HP "
			<< _ep << " EP " << _ad << " AD!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " wanna high five!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
}
FragTrap	FragTrap::operator=(FragTrap const &obj)
{
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
	return *this;
}
