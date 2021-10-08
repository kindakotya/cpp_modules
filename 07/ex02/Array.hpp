/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 05:36:11 by gmayweat          #+#    #+#             */
/*   Updated: 2021/10/03 19:18:44 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <string>

template<class T>
class Array
{
private:
	T*				_arr;
	unsigned int	_len;
public:
	Array() : _arr(new T [0]), _len(0){}
	Array(unsigned int len) : _arr(new T [len]), _len(len){}
	Array(Array const & obj);
	Array&	operator=(Array const & obj);
	~Array() {delete [] _arr;}
	class ArrayOutOfRangeException : public std::exception{
		public: const char* what() const throw() {return "ArrayOutOfRangeException (Array)";}
	};

	unsigned int	size() const{return _len;}
	T&	operator[](unsigned int i);
	const T&	operator[](unsigned int i) const;
};

template<typename T>
Array<T>::Array(Array const & obj){
	*this = obj;
}

template<typename T>
Array<T>&	Array<T>::operator=(Array<T> const & obj){
	delete [] _arr;
	_len = obj._len;
	_arr = new T [_len];
	for (unsigned int i = 0; i < _len; i++)
		_arr[i] = obj._arr[i];
	return *this;
}

template<typename T>
T&	Array<T>::operator[](unsigned int i){
	if (i >= _len)
		throw ArrayOutOfRangeException();
	return _arr[i];
}

template<typename T>
const T&	Array<T>::operator[](unsigned int i) const{
	if (i >= _len)
		throw ArrayOutOfRangeException();
	return _arr[i];
}

#endif
