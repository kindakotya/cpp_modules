/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:45:05 by gmayweat          #+#    #+#             */
/*   Updated: 2021/10/08 03:55:38 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

class Awesome
{
public:
	int _n;
	Awesome(int n) : _n(n){}
	~Awesome(){}
};


int	main(){
	{
	std::cout << "Integer test:" << std::endl;
	MutantStack<int> mstack;
	std::cout << "mstack.empty() -> " << mstack.empty() << std::endl;
	std::cout << "mstack.push(5)" << std::endl << "mstack.push(17)" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top() -> " << mstack.top() << std::endl;
	std::cout << "mstack.empty() -> " << mstack.empty() << std::endl;
	std::cout << "mstack.pop()" << std::endl;
	std::cout << "mstack.size() -> " << mstack.size() << std::endl;
	std::cout << "mstack.push(3); mstack.push(5); mstack.push(737);" << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Full stack:" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	}
	{
	std::cout << std::endl << "Class test:" << std::endl;
	MutantStack<Awesome> mstack;
	std::cout << "mstack.empty() -> " << mstack.empty() << std::endl;
	std::cout << "mstack.push(5)" << std::endl << "mstack.push(17)" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top()._n -> " << mstack.top()._n << std::endl;
	std::cout << "mstack.empty() -> " << mstack.empty() << std::endl;
	std::cout << "mstack.pop()" << std::endl;
	std::cout << "mstack.size() -> " << mstack.size() << std::endl;
	std::cout << "mstack.push(Awesome(3)); mstack.push(5); mstack.push(737);" << std::endl;
	mstack.push(Awesome(3)); mstack.push(5); mstack.push(737);
	MutantStack<Awesome>::iterator it = mstack.begin();
	MutantStack<Awesome>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << (*it)._n << std::endl;
	++it;
	}
	std::stack<Awesome> s(mstack);
	}
	return 0;
}
