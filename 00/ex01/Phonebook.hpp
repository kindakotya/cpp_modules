/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:47:39 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/11 18:36:52 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact		contacts[8];
	u_int16_t	next_number;
	u_int16_t	nu_of_contacts;
	enum		PhoneBookSize {PHONE_BOOK_SIZE = 8};

	void		add();
	void		search();
public:
	PhoneBook();
	// ~PhoneBook();

	void	open();
};

#endif