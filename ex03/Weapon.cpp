/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:46:22 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/13 13:45:23 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon (std::string type) {
	Weapon::setType(type);
}

Weapon::~Weapon () {}

std::string Weapon::getType( void ) {
	return type;
}


void Weapon::setType(std::string typeStr) {
	type = typeStr;
}
