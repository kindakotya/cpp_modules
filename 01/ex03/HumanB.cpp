/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:35:25 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/17 02:50:52 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	_weapon = 0;
	_name = name; 
}

void	HumanB::setWeapon(Weapon *weapon)
{
	_weapon = weapon;
}

void	HumanB::attack() const
{
	std::cout << _name << " attacks with his ";
	if (_weapon)
		std::cout << _weapon->getType();
	else
		std::cout << "fist";
	std::cout << std::endl;
}
