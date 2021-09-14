/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 03:02:37 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/14 18:50:12 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_f_bits = 8;

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

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member fuction called." << std::endl;
	return _raw;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member fuction called." << std::endl;
	_raw = raw;
}

Fixed&	Fixed::operator=(const Fixed &obj)
{
	std::cout << "Assignation operator called." << std::endl;
	this->_raw = obj._raw;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}
