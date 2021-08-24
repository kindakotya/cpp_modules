/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:38:02 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/24 16:51:52 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	trap("Victor");
	trap.attack("Benny");
	trap.beRepaired(15);
	trap.takeDamage(10);
	return 0;
}
