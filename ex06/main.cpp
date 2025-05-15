/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:37:15 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/15 09:25:53 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"
#include <iostream>
#include <string>

int findIndex(std::string level) {

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			return i;
	return -1;
}

int main (int ac, char **av) {

	Harl	harl;
	int		index;

	if (ac != 2) {
		std::cerr << Bold << Y << "This program takes as a parameter a string"
			<< Res << std::endl;
		return 1;
	}

	const std::string level = av[1];
	index = findIndex(level);

	switch (index) {

		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		default:
			harl.complain(level);
			break;
	}

	return 0;
}
