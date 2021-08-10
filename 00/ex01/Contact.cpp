/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 00:36:39 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/11 00:57:51 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::fields[5]= {
								"first name",
								"last name",
								"nickname",
								"phone number",
								"darkest secret"};

Contact::Contact()
{
	for (u_int8_t i = FIRST_NAME; i < DARKEST_SECRET; i++)
		this->infos[i] = std::string();
}