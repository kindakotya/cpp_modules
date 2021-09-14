/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 03:02:37 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/14 18:59:07 by gmayweat         ###   ########.fr       */
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
		return n * my_pow(n, p - 1);
	return 1;
}

Fixed::Fixed()
{
	_raw = 0;
}

Fixed::Fixed(const Fixed &obj)
{
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
	return _raw;
}

int	Fixed::getFracBits() const
{
	return _f_bits;
}

void	Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

Fixed::~Fixed(){}

float	Fixed::toFloat() const
{
	return (float)_raw / (float)my_pow(2, _f_bits);
}

int	Fixed::toInt() const
{
	return _raw >> _f_bits;
}

Fixed&	Fixed::min(Fixed &obj1, Fixed &obj2)
{
	return (obj1 < obj2) ? obj1 : obj2;
}
const Fixed&	Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	return (obj1 < obj2) ? obj1 : obj2;
}
Fixed&	Fixed::max(Fixed &obj1, Fixed &obj2)
{
	return (obj1 > obj2) ? obj1 : obj2;
}
const Fixed&	Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	return (obj1 > obj2) ? obj1 : obj2;
}

Fixed&	Fixed::operator=(const Fixed &obj)
{
	this->_raw = obj._raw;
	return *this;
}

std::ostream&	operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}

Fixed&	Fixed::operator++()
{
	++_raw;
	return *this;
}
Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	++_raw;
	return temp;
}
Fixed&	Fixed::operator--()
{
	--_raw;
	return *this;
}
Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	--_raw;
	return temp;
}
Fixed	Fixed::operator+(const Fixed &obj2)
{
	return Fixed(this->toFloat() + obj2.toFloat());
}
Fixed	Fixed::operator-(const Fixed &obj2)
{
	return Fixed(this->toFloat() - obj2.toFloat());
}
Fixed	Fixed::operator*(const Fixed &obj2)
{
	return Fixed(this->toFloat() * obj2.toFloat());
}
Fixed	Fixed::operator/(const Fixed &obj2)
{
	return Fixed(this->toFloat() / obj2.toFloat());
}
bool	operator<(const Fixed &obj1, const Fixed &obj2)
{
	return obj1.getRawBits() < obj2.getRawBits();
}
bool	operator<=(const Fixed &obj1, const Fixed &obj2)
{
	return obj1.getRawBits()  <= obj2.getRawBits();
}
bool	operator>(const Fixed &obj1, const Fixed &obj2)
{
	return obj1.getRawBits() > obj2.getRawBits();
}
bool	operator>=(const Fixed &obj1, const Fixed &obj2)
{
	return obj1.getRawBits() >= obj2.getRawBits();
}
bool	operator!=(const Fixed &obj1, const Fixed &obj2)
{
	return obj1.getRawBits() != obj2.getRawBits();
}
bool	operator==(const Fixed &obj1, const Fixed &obj2)
{
	return obj1.getRawBits() == obj2.getRawBits();
}
