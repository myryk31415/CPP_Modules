/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:00:42 by padam             #+#    #+#             */
/*   Updated: 2024/06/19 16:20:22 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

// Type constructor
Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal type constructor called" << std::endl;
	return ;
}

// Copy constructor
Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = other.type;
	return ;
}

// Assignment operator overload
Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

// Destructor
Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
