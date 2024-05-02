/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:16:36 by padam             #+#    #+#             */
/*   Updated: 2024/05/02 23:21:03 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::display(int index)
{
	std::cout << index << std::endl;
}

void	Contact::set_vars(void)
{
	this->first_name_ = this->getInput_("first name");
	this->last_name_ = this->getInput_("last name");
	this->nickname_ = this->getInput_("nickname");
	this->phone_number_ = this->getInput_("phone number");
	this->darkest_secret_ = this->getInput_("darkest secret");
}

std::string	Contact::getInput_(std::string input_name)
{
	std::string	prompt;
	std::string	input;

	prompt = "Please enter your" + input_name + ": ";
	std::cout << prompt;
	do {
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Invalid input." << std::endl;
	} while (input.empty());
	return (input);
}
