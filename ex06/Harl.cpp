/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:34:43 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/15 09:24:36 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"
#include <iostream>

Harl::Harl () {};

Harl::~Harl () {};

void Harl::complain(std::string level) {
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*functions[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++){
		if (levels[i] == level) {
			(this->*functions[i])();
			return ;
		}
	}

	std::cout << Bold << Y << "Still complaining!!!" << Res << std::endl;
}

void Harl::debug(void) {

	std::cout << Bold << G << "[ DEBUG ]" << std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple"
		<< "-pickle-special-ketchup burger. I really do!" << Res << std::endl;
}

void Harl::info(void) {
	std::cout << Bold << C << "[ INFO ]" <<std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn’t"
		<< " put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< Res << std::endl;
}

void Harl::warning(void) {
	std::cout << Bold << M << " [WARNING] " << std::endl
		<< "I think I deserve to have some extra bacon for free. I’ve been"
		<< " coming for years, whereas you started working here just last month."
		<< Res << std::endl;
}

void Harl::error(void) {
	std::cout << Bold << R << " [ERROR] " << std::endl
		<< "This is unacceptable! I want to speak to the manager now." << Res << std::endl;
}
