/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:07:03 by padam             #+#    #+#             */
/*   Updated: 2024/06/04 01:30:41 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string type;
		Animal();
		Animal(std::string type);
	public:
		Animal(const Animal& other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		std::string	getType(void) const;
		virtual void		makeSound(void) const;
};

#endif

