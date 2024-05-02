/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:14:53 by padam             #+#    #+#             */
/*   Updated: 2024/05/02 23:23:27 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->next_index_ = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::addContact_(void)
{
	this->contacts_[this->next_index_].set_vars();
	this->next_index_ = (this->next_index_ + 1) % 8;
}

void	PhoneBook::searchContacts_(void)
{
	std::string	input;

	for (int i = 0; i < this->next_index_; i++)
		this->contacts_[i].view_short(i);
	std::cout << "Enter the index of the contact you want to view: ";
	std::getline(std::cin, input);
	if (input.length() == 1 && input[0] >= '0' && input[0] < this->next_index_ + '0')
		this->contacts_[input[0] - '0'].view_full(input[0] - '0');
	else
		std::cout << "Invalid input." << std::endl;
}
