/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:01:03 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/14 11:52:12 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <ostream>
#include <string>


static void findReplace(std::fstream &file, std::ofstream &outFile,
						const std::string s1, const std::string s2) {

	std::string	line;
	size_t		index;

	while (std::getline(file, line)) {
		while ((index = line.find(s1)) != std::string::npos) {
			line.erase(index, s1.length());
			line.insert(index, s2);
			index += s2.length();
		}
		outFile << line << std::endl;
	}
}

int main(int ac, char **av) {

	if (ac != 4) {
		std::cerr << "Wrong Parameters!" << std::endl
			<< "This program accepts three parameters in the following order: "
			<< "a filename and two strings, s1 and s2" << std::endl;
		return 1;
	}

	const std::string	s1 = av[2];
	const std::string	s2 = av[3];
	if (s1.empty()) {
		std::cout << "s1 needs to not be empty" << std::endl;
		return 1;
	}

	std::fstream file(av[1]);
	if (!file) {
		std::cerr << "Failed to open file" << std::endl;
		return 1;
	}

	std::ofstream outFile( (std::string)av[1] + ".replace");
	if (!outFile) {
		std::cerr << "Failed to create file" << std::endl;
	}

	findReplace(file, outFile, s1, s2);
	std::cout << "Congrats file has been replaced" << std::endl;;

	file.close();
	outFile.close();
	return 0;
}
