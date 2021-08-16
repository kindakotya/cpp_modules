/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:02:31 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/16 19:57:28 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();

	void			announce() const;
	static Zombie*	zombieHorde(int N, std::string name);

private:
	std::string	_name;
};

#endif
