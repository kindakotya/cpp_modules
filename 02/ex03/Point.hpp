/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 02:23:45 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/22 04:03:49 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed	_x;
	Fixed	_y;
public:
	Point();
	Point(const Point &obj);
	Point(const float x, const float y);
	~Point();
	Point	operator=(const Point& obj);
	Point	operator-(const Point& obj2) const;
	Fixed	getX() const;
	Fixed	getY() const;
};

#endif
