/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 02:22:08 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/14 18:59:16 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int						_raw;
	static const int		_f_bits;

public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();
	static 					int my_pow(int n, int p);
	int						getRawBits() const;
	void					setRawBits(int const raw);
	int						getFracBits() const;
	float					toFloat() const;
	int						toInt() const;
	static Fixed&			min(Fixed &obj1, Fixed &obj2);
	static const Fixed&		min(const Fixed &obj1, const Fixed &obj2);
	static Fixed&			max(Fixed &obj1, Fixed &obj2);
	static const Fixed&		max(const Fixed &obj1, const Fixed &obj2);
	Fixed&					operator=(const Fixed &obj);
	Fixed&					operator++();
	Fixed					operator++(int);
	Fixed&					operator--();
	Fixed					operator--(int);
	Fixed					operator+(const Fixed &obj2);
	Fixed					operator-(const Fixed &obj2);
	Fixed					operator*(const Fixed &obj2);
	Fixed					operator/(const Fixed &obj2);
};
	bool				operator<(const Fixed &obj1, const Fixed &obj2);
	bool				operator<=(const Fixed &obj1, const Fixed &obj2);
	bool				operator>(const Fixed &obj1, const Fixed &obj2);
	bool				operator>=(const Fixed &obj1, const Fixed &obj2);
	bool				operator!=(const Fixed &obj1, const Fixed &obj2);
	bool				operator==(const Fixed &obj1, const Fixed &obj2);
	std::ostream&		operator<<(std::ostream &out, const Fixed &obj);


#endif
