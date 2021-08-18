/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 03:39:09 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/18 19:13:40 by gmayweat         ###   ########.fr       */
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
	
	enum _levels {	DEBUG,
					INFO,
					WARNING,
					ERROR
	};

public:
	void	complain(std::string level);
	void	complain();
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
