/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 00:05:27 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/20 04:04:56 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

Convert::Convert(std::string const & str) : _str(str), _is_ex(false){
	try{
		_num = std::stod(_str);
	}
	catch (std::exception & e){
		_is_ex = true;
	}
}

Convert::Convert(Convert const & obj)
	: _str(obj._str), _is_ex(obj._is_ex), _num(obj._num){}

Convert&	Convert::operator=(Convert const & obj){
	_str = obj._str;
	_is_ex = obj._is_ex;
	_num = obj._num;
	return *this;
}

Convert::~Convert(){}

void	Convert::dispChar() const{
	std::cout << "char: ";
	if (_num < CHAR_MIN || _num > CHAR_MAX || _is_ex || std::isnan(_num)){
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (isprint(static_cast<int>(_num)))
		std::cout << '\'' << static_cast<char>(_num) << '\'' << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	Convert::dispInt() const{
	std::cout << "int: ";
	if (_num < INT_MIN || _num > INT_MAX || _is_ex || std::isnan(_num)){
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << static_cast<int>(_num) << std::endl;
}

void	Convert::dispFloat() const{
	std::cout << "float: ";
	if (_num < -__FLT_MAX__ || _num > __FLT_MAX__ || _is_ex){
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << static_cast<float>(_num)
			<< (fmod(_num, 1) > __FLT_MIN__ || isnan(_num)
				|| static_cast<int>(_num / 1000000) > 0 ? "" : ".0")
			<< 'f' << std::endl;
}

void	Convert::dispDouble() const{
	std::cout << "double: ";
	if (_is_ex){
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << _num
			<< (fmod(_num, 1) > __FLT_MIN__ || isnan(_num)
				|| static_cast<int>(_num / 1000000) > 0 ? "" : ".0") << std::endl;
}
