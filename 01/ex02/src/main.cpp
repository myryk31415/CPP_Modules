/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:36:51 by padam             #+#    #+#             */
/*   Updated: 2024/05/05 23:39:52 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address of the string:\t\t" << &str << std::endl;
	std::cout << "Address pointed to by stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Address pointed to by stringREF:\t" << &stringREF << std::endl;
	std::cout << "Value of the String:\t\t\t" << str << std::endl;
	std::cout << "Value of StringPTR adress:\t\t" << *stringPTR << std::endl;
	std::cout << "Value of StringREF adress:\t\t" << stringREF << std::endl;
	return 0;
}
