/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:44:32 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/16 19:39:43 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "There is can't be less than 1 Zombie at horde :C\n";
		return (NULL);
	}
	Zombie	*Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		Horde[i]._name = name;
	}
	return (Horde);
}
