/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 02:34:28 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 05:05:55 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	_brain;
public:
	Dog();
	virtual ~Dog();
	Dog(Dog const & obj);

	Dog&	operator=(Dog const & obj);
	//Brain*	getBrain() const{return _brain;}
	void	makeSound() const;
};


#endif
