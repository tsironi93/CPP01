/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:34:43 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/14 14:48:08 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"
#include <iostream>

Harl::Harl () {};

Harl::~Harl () {};

void Harl::complain(std::string level) {
	
}

void debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
			<< "-pickle-special-ketchup burger. I really do!" << std::endl;
}

void info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t"
			<< " put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			<< std::endl;
}

void warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been"
			<< " coming for years, whereas you started working here just last month."
			<< std::endl;
}

void error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
