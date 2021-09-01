/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 02:42:29 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/01 03:16:39 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(){
	_type = "WrongCat";
	std::cout << "WrongCat has born." << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat has died." << std::endl;
}

// void	WrongCat::makeSound() const{
// 	std::cout << "Meow." << std::endl;
// }
