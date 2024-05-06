/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:36:51 by padam             #+#    #+#             */
/*   Updated: 2024/05/06 01:51:58 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
using namespace std;

int	inputCheck(int argc, char **argv)
{
	if (argc != 4)
	{
		cout << "Usage: ./basicallySed [filename] [pattern] [substitute]" << std::endl;
		return (1);
	}
	ifstream inputFile(argv[1]);
	if (!inputFile.is_open()) {
		cerr << "Error opening the file!" << endl;
		return 1;
	}
	ofstream outputFile(argv[1] + ".replace");
	if (!outputFile.is_open()) {
		cerr << "Error creating the output file!" << endl;
		inputFile.close();
		return 1;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (inputCheck(argc, argv))
		return (1);

	return (0);
}
