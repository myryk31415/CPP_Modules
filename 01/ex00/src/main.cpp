/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:36:51 by padam             #+#    #+#             */
/*   Updated: 2024/05/05 22:35:45 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	std::string name;

	std::cout << "Creating zombie on the stack." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;
	randomChump(name);

	std::cout << "Creating zombie on the heap." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;

	Zombie *zombie = newZombie(name);
	zombie->announce();
	delete zombie;

	return 0;
}
