/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 03:39:09 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/18 18:29:29 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class Karen
{
private:
	void debug();
	void info();
	void warning();
	void error();

	static const std::string	_levels_list[4];
	//void (Karen::*func)(void);

public:
	void complain(std::string level);
	// Karen(/* args */);
	// ~Karen();
};

// Karen::Karen(/* args */)
// {
// }

// Karen::~Karen()
// {
// }


#endif
