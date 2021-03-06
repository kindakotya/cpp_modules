/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 00:45:04 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/19 01:31:56 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>
#include <string>


int	main(int ac, char **av)
{
	if (ac == 4){
		Replace::replace(av[1], av[2], av[3]);
	}
	else if (ac == 2 && !strcmp(av[1], "test")){
		std::cout << "Standart test: check ";
		std::string s1 = "meow";
		std::string s2 = "woof";
		Replace::replace("lolkek", s1, s2);
		std::cout << "lolkek.replace" << std::endl;
		std::cout << std::endl << "Bad filename test:" << std::endl;
		Replace::replace("bad_filename :c", "lol", "kek");
		std::cout << std::endl << "Empty strings test:" << std::endl;
		Replace::replace("bad_filename :c", "", "kek");
	}
	else
		std::cout << "Error: wrong number of arguments." << std::endl;
	return 0;
}
