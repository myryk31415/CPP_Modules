/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:00:57 by padam             #+#    #+#             */
/*   Updated: 2024/06/04 00:41:39 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat(void);
		Cat(const Cat& other);
		Cat &operator=(const Cat &other);
		~Cat();
		void	makeSound(void) const;
		void	setIdea(int index, std::string idea);
		std::string	getIdea(int index) const;
};

#endif

