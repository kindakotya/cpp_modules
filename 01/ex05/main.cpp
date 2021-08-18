/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 03:40:38 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/19 01:16:02 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main()
{
	Karen karen;
	std::cout << "Test DEBUG:" << std::endl;
	karen.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "Test INFO:" << std::endl;
	karen.complain("INFO");
	std::cout << std::endl;
	std::cout << "Test WARNING:" << std::endl;
	karen.complain("WARNING");
	std::cout << std::endl;
	std::cout << "Test ERROR:" << std::endl;
	karen.complain("ERROR");
	return 0;
}
