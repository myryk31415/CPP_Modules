/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:00:09 by padam             #+#    #+#             */
/*   Updated: 2024/05/26 22:00:48 padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	return ;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	return ;
}

// Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Assignment operator called" << std::endl;
	(void)other;
	return (*this);
}

// Destructor
Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
	return ;
}

