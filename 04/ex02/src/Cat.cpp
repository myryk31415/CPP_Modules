/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:00:09 by padam             #+#    #+#             */
/*   Updated: 2024/06/04 01:17:26 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->brain = new Brain();
	return ;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
	return ;
}

// Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Assignment operator called" << std::endl;
	this->brain = new Brain(*other.brain);
	return (*this);
}

// Destructor
Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
	return ;
}

void	Cat::setIdea(int index, std::string idea)
{
	this->brain->setIdea(index, idea);
	return ;
}

std::string	Cat::getIdea(int index) const
{
	return (this->brain->getIdea(index));
}
