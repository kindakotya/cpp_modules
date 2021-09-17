/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:20:23 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/16 20:04:52 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
	std::cout << "Initialize:" << std::endl;
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << std::endl << "getType test:" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl << "makeSound test:" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "Wrong animals initialize:" << std::endl;
	const WrongAnimal*	wr_animal = new WrongAnimal();
	const WrongCat*		wr_cat = new WrongCat();

	std::cout << std::endl << "Wrong makeSound test:" << std::endl;
	wr_animal->makeSound();
	wr_cat->makeSound();

	std::cout << std::endl << "Destruct:" << std::endl;
	delete j;
	delete i;
	delete meta;
	delete wr_cat;
	delete wr_animal;
	return 0;
}
