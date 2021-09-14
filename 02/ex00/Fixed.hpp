/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 02:22:08 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/14 18:49:51 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int						_raw;
	static const int	_f_bits;

public:
	Fixed();
	Fixed(const Fixed &obj);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);
	Fixed&	operator=(const Fixed &obj);
};

#endif
