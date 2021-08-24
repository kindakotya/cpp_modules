/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 02:22:08 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/25 02:01:03 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int						_raw;
	static const int	_f_bits;

public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();
	static int my_pow(int n, int p);
	int		getRawBits() const;
	void	setRawBits(int const raw);
	int		getFracBits() const;
	float	toFloat() const;
	int		toInt() const;
	Fixed					operator=(const Fixed &obj);
};
	std::ostream&	operator<<(std::ostream &out, const Fixed &obj);


#endif
