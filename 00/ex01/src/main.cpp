/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:14:13 by padam             #+#    #+#             */
/*   Updated: 2024/05/03 13:11:27 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	int	exit = 0;
	std::string input;
	PhoneBook phonebook;
	std::cout << "Welcome to the phonebook!" << std::endl;
	do
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		getline(std::cin, input);
		if (input == "EXIT")
			exit = 1;
		else if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContacts();
		else
			std::cout << "Invalid input." << std::endl;
	} while (!exit);
	std::cout << "Goodbye!" << std::endl;
	return (0);
}
