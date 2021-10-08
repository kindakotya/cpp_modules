/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:48:01 by gmayweat          #+#    #+#             */
/*   Updated: 2021/10/08 03:58:42 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack const & obj);
	~MutantStack();

	// void			push(const T & elem);
	// void			pop();
	// T const &	top()const;
	// size_t		size()const;
	// bool			empty() const;
	MutantStack&	operator=(MutantStack const & obj);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin();
	iterator	end();
};

template <class T>
MutantStack<T>::MutantStack(): std::stack<T>() {}

template <class T>
MutantStack<T>::~MutantStack(){}

template <class T>
MutantStack<T>::MutantStack(MutantStack<T> const & obj){
	*this = obj;
}

template <class T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack<T> const & obj){
	if (this != &obj)
		std::stack<T>::operator=(obj);
	return *this;
}

template <class T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin(){
	return std::stack<T>::c.begin();
}

template <class T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end(){
	return std::stack<T>::c.end();
}

// template <class T>
// void	MutantStack<T>::push(const T & elem){
// 	std::stack<T>::push(elem);
// }

// template <class T>
// void	MutantStack<T>::pop(){
// 	std::stack<T>::pop();
// }

// template <class T>
// T const &	MutantStack<T>::top()const{
// 	return std::stack<T>::top();
// }

// template <class T>
// size_t	MutantStack<T>::size()const{
// 	return std::stack<T>::size();
// }

// template <class T>
// bool	MutantStack<T>::empty()const{
// 	return std::stack<T>::empty();
// }

#endif
