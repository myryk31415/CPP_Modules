/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:16:36 by padam             #+#    #+#             */
/*   Updated: 2024/05/03 13:17:04 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::view_full(int index)
{
	std::cout << index << std::endl;
	std::cout << "First name: " << this->first_name_ << std::endl;
	std::cout << "Last name: " << this->last_name_ << std::endl;
	std::cout << "Nickname: " << this->nickname_ << std::endl;
	std::cout << "Phone number: " << this->phone_number_ << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret_ << std::endl;
}

void	Contact::view_short(int index)
{
	std::cout << std::string(9, 'x') << index << "|";
	if (this->first_name_.length() > 10)
		std::cout << this->first_name_.substr(0, 9) << ".";
	else
		std::cout << std::string(10 - this->first_name_.length(), 'x') << this->first_name_;
	std::cout << "|";
	if (this->last_name_.length() > 10)
		std::cout << this->last_name_.substr(0, 9) << ".";
	else
		std::cout << std::string(10 - this->last_name_.length(), 'x')<< this->last_name_;
	std::cout << "|";
	if (this->nickname_.length() > 10)
		std::cout << this->nickname_.substr(0, 9) << ".";
	else
		std::cout << std::string(10 - this->nickname_.length(), 'x')<< this->nickname_;
	std::cout << std::endl;

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

	prompt = "Please enter your " + input_name + ": ";
	std::cout << prompt;
	do {
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Invalid input." << std::endl;
	} while (input.empty());
	return (input);
}
