/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:40:19 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/09 19:51:41 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <inttypes.h>
# include <string>

struct Data
{
	std::string	str;
	int			n;
	char		c;
};


uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
