/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:29:34 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/17 02:50:33 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
public:
	HumanB(std::string name);

	void	setWeapon(Weapon *weapon);
	void	attack() const;
private:
	std::string	_name;
	Weapon		*_weapon;
};
#endif
