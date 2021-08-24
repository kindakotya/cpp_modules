/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:03:44 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/25 01:23:00 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : virtual ClapTrap, public ScavTrap, public FragTrap
{
private:
	std::string	_name;
	//unsigned int	_hp;
public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &obj);
	virtual ~DiamondTrap();

	DiamondTrap	operator=(DiamondTrap const &obj);
	void	whoAmI();
	//virtual void attack(std::string const &target){ScavTrap::attack(target);}
	//virtual void highFivesGuys();//{std::cout << "DiamondTrap " << _name << " wanna high five!" << std::endl;}
};


#endif
