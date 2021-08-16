/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:30:19 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/16 20:53:25 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int		test_no = 1;
	Zombie	*Niggans;
	for (int n = -1; n <= 2; n++)
	{
		std::cout << "Test number " << test_no++ << " with "
				<< n << " Zombies" << std::endl << std::endl;
		Niggans = Zombie::zombieHorde(n, "Niggan");
		if (Niggans)
		{
			for (int i = 0; i < n; i++)
				Niggans[i].announce();
			delete [] Niggans;
		}
		std::cout << std::endl;
	}
	return (0);
}
