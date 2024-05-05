/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:32:40 by padam             #+#    #+#             */
/*   Updated: 2024/05/06 00:29:42 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
