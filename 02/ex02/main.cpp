/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 02:39:34 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/22 02:08:16 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main()
{
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		Fixed a(7.75f);
		Fixed b(a + Fixed(2.25f));
		std::cout <<  std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "a > b -> " << std::boolalpha << (a > b) << std::endl;
		std::cout << "a < b -> " << std::boolalpha << (a < b) << std::endl;
		std::cout << "a >= Fixed(7.75f) -> " << std::boolalpha << (a >= Fixed(7.75f)) << std::endl;
		std::cout << "a <= Fixed(7.75f) -> " << std::boolalpha << (a <= Fixed(7.75f)) << std::endl;
		std::cout << "a != Fixed(7.75f) -> " << std::boolalpha << (a != Fixed(7.75f)) << std::endl;
		std::cout << "a == Fixed(7.75f) -> " << std::boolalpha << (a == Fixed(7.75f)) << std::endl;
		std::cout << "a + b -> " << a + b << std::endl;
		std::cout << "a - b -> " << a - b << std::endl;
		std::cout << "a * Fixed(2) -> " << a * Fixed(2) << std::endl;
		std::cout << "a / b -> " << a / b << std::endl;
		std::cout << "++a -> " << ++a << std::endl;
		std::cout << "--a -> " << --a << std::endl;
		std::cout << "a++ -> " << a++ << std::endl;
		std::cout << "a-- -> " << a-- << std::endl;
		std::cout << "min(a, b) -> " << Fixed::min(a, b) << std::endl;
		std::cout << "max(a, b) -> " << Fixed::max(a, b) << std::endl;
	}
	return 0;
}
