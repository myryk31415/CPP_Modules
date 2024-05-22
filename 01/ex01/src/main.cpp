/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:36:51 by padam             #+#    #+#             */
/*   Updated: 2024/05/22 15:19:53 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	std::string name;

	std::cout << "Creating zombies on the heap." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;
	Zombie *zombie = zombieHorde(5, name);
	for (int i = 0; i < 5; i++)
		zombie[i].announce();
	delete [] zombie;
	return 0;
}
