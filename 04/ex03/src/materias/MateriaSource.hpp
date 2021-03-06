/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:30:11 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 04:39:00 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <string>

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	_store[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const & obj);
	~MateriaSource();
	MateriaSource&	operator=(MateriaSource const & obj);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};


#endif
