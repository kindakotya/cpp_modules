/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 01:17:04 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/14 21:47:28 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)// :  ClapTrap(name),FragTrap(name)
{
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hp = FragTrap::_hp;
	_ad = FragTrap::_ad;
	_ep = ScavTrap::_ep;
	std::cout << "DiamondTrap " << _name << " has born with " << _hp << " HP "
			<< _ep << " EP " << _ad << " AD!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " has destroyed." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &obj)
{
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << " and phooly siely "
			<< ClapTrap::_name << " :C" << std::endl;
}
