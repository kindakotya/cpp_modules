/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:15:39 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/16 17:39:36 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << " has been killed :c" << std::endl;
}

void	Zombie::announce() const
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
