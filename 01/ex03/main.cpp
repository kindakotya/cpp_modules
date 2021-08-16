/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 02:28:44 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/17 02:50:28 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <string>
#include <iostream>

int main()
{
	{
Weapon        club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
	}
	{
Weapon        club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(&club);
jim.attack();
club.setType("some other type of club");
jim.attack();
	}
}
