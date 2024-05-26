/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:36:51 by padam             #+#    #+#             */
/*   Updated: 2024/05/22 15:30:38 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./basicallySed [filename] [pattern] [substitute]" << std::endl;
		return (1);
	}
	Sed	test = Sed(argv[1]);
	test.replace(argv[2], argv[3]);
	return (0);
}
