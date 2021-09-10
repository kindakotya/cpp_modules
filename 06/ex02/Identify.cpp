/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 06:00:41 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/10 06:47:30 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base*	Identify::generate(void){
	srand(static_cast<unsigned int>(std::chrono::system_clock::now().time_since_epoch().count()));
	unsigned int	n = rand() % 10;
	if (n > 0 && n <= 3){
		std::cout << "Creating a new A object." << std::endl;
		return new A;
	}
	else if (n > 3 && n <= 6){
		std::cout << "Creating a new B object." << std::endl;
		return new B;
	}
	else if (n > 6 && n <= 9){
		std::cout << "Creating a new C object." << std::endl;
		return new C;
	}
	return generate();
}

void	Identify::identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "Dat's A object." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Dat's B object." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Dat's C object." << std::endl;
	else
		std::cout << "Nice try!" << std::endl;
}

void	Identify::identify(Base& p){
	try{
		p = dynamic_cast<A&>(p);
		std::cout << "Dat's A object." << std::endl;
	}
	catch (std::bad_cast){
		try{
			p = dynamic_cast<B&>(p);
			std::cout << "Dat's B object." << std::endl;
		}
		catch (std::bad_cast){
			try{
				p = dynamic_cast<C&>(p);
				std::cout << "Dat's C object." << std::endl;
			}
			catch (std::bad_cast){
				std::cout << "Nice try!" << std::endl;
			}
		}
	}
}
