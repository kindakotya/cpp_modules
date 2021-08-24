/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:17:33 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/25 02:20:21 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
	/* data */
public:
	Cat(/* args */);
	~Cat();
};

Cat::Cat(){std::cout << "Cat has born." << std::endl;}
// Cat::Cat(Cat const &obj){}
Cat::~Cat(){std::cout << "Cat has died." << std::endl;}
// Cat	Cat::operator=(Cat const &obj){return *this;}



#endif
