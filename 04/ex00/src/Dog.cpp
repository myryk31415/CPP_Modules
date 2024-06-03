/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:00:38 by padam             #+#    #+#             */
/*   Updated: 2024/06/03 23:59:36 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	return ;
}

// Copy constructor
Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	return ;
}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Assignment operator called" << std::endl;
	(void)other;
	return (*this);
}

// Destructor
Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
	return ;
}
