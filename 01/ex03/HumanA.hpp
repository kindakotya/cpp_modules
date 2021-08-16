/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:29:34 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/17 02:44:04 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);

	void	setWeapon(Weapon &weapon);
	void	attack() const;
private:
	std::string	_name;
	Weapon		&_weapon;
};
#endif
