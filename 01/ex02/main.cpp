/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 21:01:39 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/16 21:27:39 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strptr = &str;
	std::string	&strref = str;

	std::cout << "Address of the string:" << std::endl;
	std::cout << &str << std::endl << std::endl;
	std::cout << "Address of the string using stringptr:" << std::endl;
	std::cout << strptr << std::endl << std::endl;
	std::cout << "Address of the string using stringref:" << std::endl;
	std::cout << &strref << std::endl << std::endl;
	std::cout << "String using the pointer:" << std::endl;
	std::cout << *strptr << std::endl << std::endl;
	std::cout << "String using the reference:" << std::endl;
	std::cout << strref << std::endl;
	return (0);
}