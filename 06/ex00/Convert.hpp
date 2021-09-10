/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:28:24 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/09 00:05:44 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>

class Convert
{
private:
	std::string	_str;
	bool		_is_ex;
	double		_num;
public:
	Convert(std::string const & str);
	Convert(Convert const & obj);
	Convert	operator=(Convert const & obj);

	void	dispChar() const;
	void	dispInt() const;
	void	dispFloat() const;
	void	dispDouble() const;
	~Convert();
};


#endif
