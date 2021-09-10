/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:21:48 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/08 19:05:25 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int	main(int ac, char **av){
	if (ac != 2){
		std::cout << "The program must have 1 argument." << std::endl;
		return 1;
	}
	Convert kek(av[1]);
	kek.dispChar();
	kek.dispInt();
	kek.dispFloat();
	kek.dispDouble();
	return 0;
}
