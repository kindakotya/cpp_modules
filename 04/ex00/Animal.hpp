/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:08:32 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/25 02:33:42 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(Animal const &obj);
	virtual ~Animal();
	Animal	operator=(Animal const &obj);
};

Animal::Animal(){std::cout << "Animal has born." << std::endl;}
Animal::Animal(Animal const &obj){this->type = obj.type;}
Animal::~Animal(){std::cout << "Animal has died." << std::endl;}
Animal	Animal::operator=(Animal const &obj){this->type = obj.type;return *this;}


#endif
