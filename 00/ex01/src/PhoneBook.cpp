/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:14:53 by padam             #+#    #+#             */
/*   Updated: 2024/05/15 14:41:43 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->next_index_ = 0;
	this->contact_count_ = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::addContact(void)
{
	this->contacts_[this->next_index_].set_vars();
	this->next_index_ = (this->next_index_ + 1) % 8;
	if (this->contact_count_ < 8)
		this->contact_count_++;
}

void	PhoneBook::searchContacts(void)
{
	std::string	input;

	if (this->contact_count_ == 0)
	{
		std::cout << "No contacts to search." << std::endl;
		return;
	}
	for (int i = 0; i < this->contact_count_; i++)
		this->contacts_[i].view_short(i);
	while (1)
	{
		std::cout << "Enter the index of the contact you want to view: ";
		std::getline(std::cin, input);
		if (input.length() == 1 && input[0] >= '0' && input[0] < this->contact_count_ + '0')
		{
			this->contacts_[input[0] - '0'].view_full(input[0] - '0');
			break;
		}
		else
			std::cout << "Invalid input." << std::endl;
	}
}
