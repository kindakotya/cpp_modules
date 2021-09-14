/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:00:18 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/14 21:41:51 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
protected:
	FragTrap();
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &obj);
	virtual ~FragTrap();

	FragTrap&		operator=(FragTrap const &obj);
	virtual void	highFivesGuys();
};

#endif
