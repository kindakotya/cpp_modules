/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:20:23 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 05:06:06 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#define ANIMAL_SIZE 100


int main() {
	Animal*	zoo[ANIMAL_SIZE];

	for (int i = 0; i < ANIMAL_SIZE; i++){
		if (i == ANIMAL_SIZE / 2)
			std::cout << std::endl << "___________HALF___________" << std::endl << std::endl;
		if (i < ANIMAL_SIZE / 2)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
	}
	for (int i = 0; i < ANIMAL_SIZE; i++){
		if (i == ANIMAL_SIZE / 2)
			std::cout << std::endl << "___________HALF___________" << std::endl << std::endl;
		zoo[i]->makeSound();
	}
	for (int i = 0; i < ANIMAL_SIZE; i++){
		if (i == ANIMAL_SIZE / 2)
			std::cout << std::endl << "___________HALF___________" << std::endl << std::endl;
		delete zoo[i];
	}
	// Dog basic;
	// {
	// 	Dog	tmp = basic;
	// 	std::cout << basic.getBrain() << std::endl << tmp.getBrain() << std::endl;
	// }
	//getchar();
	return 0;
}
