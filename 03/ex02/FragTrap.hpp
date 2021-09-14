/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:00:18 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/14 21:40:15 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : ClapTrap
{
private:
	/* data */
public:
	FragTrap(std::string name);
	virtual ~FragTrap();
	FragTrap(FragTrap const &obj);

	FragTrap&	operator=(FragTrap const &obj);
	void		highFivesGuys();
};

#endif
