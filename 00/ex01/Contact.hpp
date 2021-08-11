/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 00:36:43 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/11 18:36:48 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
public:
	static std::string fields[5];
	std::string infos[5];
	enum field_list {
					FIRST_NAME,
					LAST_NAME,
					NICKNAME,
					PHONE_NUMBER,
					DARKEST_SECRET
					};

	Contact();
	void	print(u_int16_t index, u_int16_t fields_to_print);
};

#endif