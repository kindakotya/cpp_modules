/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 03:02:37 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/25 01:53:21 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <limits>

const int Fixed::_f_bits = 8;

int	Fixed::my_pow(int n, int p)
{
	if (p > 0)
		return (n * my_pow(n, p - 1));
	return (1);
}

Fixed::Fixed()
{
	std::cout << "Default constructor called." << std::endl;
	_raw = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called." << std::endl;
	this->_raw = obj._raw;
}

Fixed::Fixed(const int n)
{
	_raw = n << _f_bits;
}

Fixed::Fixed(const float n)
{
	_raw = roundf(n * (float)my_pow(2, _f_bits));
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member fuction called." << std::endl;
	return _raw;
}

int	Fixed::getFracBits() const
{
	return _f_bits;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member fuction called." << std::endl;
	_raw = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

float	Fixed::toFloat() const
{
	return ((float)_raw / my_pow(2, _f_bits));
}

int	Fixed::toInt() const
{
	return (_raw >> _f_bits);
}

Fixed Fixed::operator=(const Fixed &obj)
{
	std::cout << "Assignation operator called." << std::endl;
	this->_raw = obj._raw;
	return (*this);
}

std::ostream&	operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
