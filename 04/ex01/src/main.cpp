/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:33:55 by padam             #+#    #+#             */
/*   Updated: 2024/06/04 01:18:00 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Cat* i = new Cat();
	i->setIdea(0, "I am a cat");
	const Cat* k = new Cat(*i);
	const Cat y = *i;
	std::cout << std::endl;
	std::cout << "Idea: " << i->getIdea(0) << std::endl;
	std::cout << "Idea: " << k->getIdea(0) << std::endl;
	std::cout << "Idea: " << y.getIdea(0) << std::endl;
	std::cout << std::endl;
	delete i;
	delete k;

	std::cout << std::endl;
	Animal* a = new Dog();
	Animal* b = new Cat();
	std::cout << std::endl;
	delete a;
	delete b;
	std::cout << std::endl;
	return 0;
}
