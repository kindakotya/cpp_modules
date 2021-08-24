/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:38:02 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/25 01:23:18 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main()
{
	std::cout << "ClapTrap test:" << std::endl << std::endl;
	{
		ClapTrap	trap("Victor");
		trap.attack("Benny");
		trap.beRepaired(15);
		trap.takeDamage(10);
	}
	std::cout << std::endl << "Scavtrap test:" << std::endl << std::endl;
	{
		ScavTrap trap("Yes-man");
		trap.attack("Mr. House");
		trap.guardGate();
	}
	std::cout << std::endl << "FragTrap test:" << std::endl << std::endl;
	{
		FragTrap trap("Fisto");
		trap.highFivesGuys();
	}
	std::cout << std::endl << "DiamondTrap test:" << std::endl << std::endl;
	{
		DiamondTrap trap("Courier");
		trap.highFivesGuys();
		trap.attack("Casadore");
		trap.guardGate();
		trap.whoAmI();
	}
	return 0;
}
