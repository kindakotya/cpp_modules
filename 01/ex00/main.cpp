/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:30:19 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/16 17:38:04 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	Rick("Rick");
	Zombie	*Karl = Zombie::newZombie("Karl");

	Rick.announce();
	Karl->announce();
	Zombie::randomChump("Daryl");
	delete Karl;
	return (0);
}
