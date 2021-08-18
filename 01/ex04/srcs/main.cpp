/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 00:45:04 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/18 03:31:53 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>
int	main(int ac, char **av)
{
	std::cout << "Standart test: check ";
	if (ac == 4){
		std::cout << av[1] << ".replace" << std::endl;
		Replace::replace(av[1], av[2], av[3]);
	}
	else{
		std::string s1 = "meow";
		std::string s2 = "woof";
		Replace::replace("lolkek", s1, s2);
		std::cout << "lolkek.replace" << std::endl;
	}
	std::cout << std::endl << "Bad filename test:" << std::endl;
	Replace::replace("bad_filename :c", "lol", "kek");
	std::cout << std::endl << "Empty strings test:" << std::endl;
	Replace::replace("bad_filename :c", "", "kek");
	return 0;
}
