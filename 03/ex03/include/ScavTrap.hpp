/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:16:51 by padam             #+#    #+#             */
/*   Updated: 2024/05/21 19:01:08 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif
