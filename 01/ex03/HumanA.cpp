/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:35:25 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/17 02:44:26 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	_name = name;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}

void	HumanA::attack() const
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
