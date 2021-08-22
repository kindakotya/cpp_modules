/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 02:39:34 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/22 04:13:47 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

static int	proizv(Point const &a, Point const &b)
{
	Fixed	meow(a.getX() * b.getY() - b.getX() * a.getY());
	if (meow == 0)
		return 100000;
	return meow > 0;
}

static bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	int		n = 0;
	n += proizv(a - b, a - point);
	n += proizv(b - c, b - point);
	n += proizv(c - a, c - point);
	if (n == 3 || n == 0)
		return true;
	return false;
}

int	main()
{
	Point a(10.5f, 7.25f);
	Point b(11.214f, 1.f);
	Point c(2.f, 2.f);
	Point point(7.11f, 3.44f);
	std::cout << "a(10.5,7.25), b(11.214, 1), c(2, 2), point(7.11, 3.44) -> "
	<< std::boolalpha << bsp(a, b, c, point) << std::endl;
	std::cout << "a(10.5,7.25), b(11.214, 1), c(2, 2), point(10.5, 7.25) -> "
	<< std::boolalpha << bsp(a, b, c, Point(10.5, 7.25)) << std::endl;
	std::cout << "a(10.5,7.25), b(11.214, 1), c(2, 2), point(10.5, 7.24) -> "
	<< std::boolalpha << bsp(a, b, c, Point(10.5, 7.24)) << std::endl;
	std::cout << "a(10.5,7.25), b(11.214, 1), c(2, 2), point(10.5, 7.26) -> "
	<< std::boolalpha << bsp(a, b, c, Point(10.5, 7.26)) << std::endl;
	std::cout << "a(10.5,7.25), b(11.214, 1), c(2, 2), point(99.5, 7.20) -> "
	<< std::boolalpha << bsp(a, b, c, Point(99.5, 7.20)) << std::endl;
	return 0;
}
