/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 02:30:30 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/22 04:04:01 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	_x = Fixed();
	_y = Fixed();
}

Point::Point(const Point &obj)
{
	this->_x = obj._x;
	this->_y = obj._y;
}

Point::Point(const float x, const float y)
{
	_x = Fixed(x);
	_y = Fixed(y);
}

Point	Point::operator=(const Point &obj)
{
	this->_x = obj._x;
	this->_y = obj._y;
	return *this;
}

Point	Point::operator-(const Point &obj2) const
{
	Point	meow(this->getX().toFloat() - obj2.getX().toFloat(),
				this->getY().toFloat() - obj2.getY().toFloat());
	return meow;
}

Fixed	Point::getX() const
{
	return _x;
}

Fixed	Point::getY() const
{
	return _y;
}

Point::~Point(){}
