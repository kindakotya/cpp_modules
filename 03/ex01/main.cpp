/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:38:02 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/24 17:57:41 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
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
	return 0;
}
