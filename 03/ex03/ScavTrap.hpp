/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:55:21 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/14 21:42:03 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class ScavTrap : virtual public ClapTrap
{
protected:
	ScavTrap();
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &obj);
	virtual ~ScavTrap();

	ScavTrap&		operator=(ScavTrap const &obj);
	void			guardGate();
	virtual void	attack(std::string const &target){
		std::cout << "ScavTrap " << _name << " attack " << target << ", causing "
			<< _ad << " points of damage!" << std::endl;
	}
};


#endif
