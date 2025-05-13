/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 08:35:17 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/13 08:41:21 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string &name) { _name = name; }

Zombie::~Zombie(void) {
  std::cout << _name << " has been destroyed!" << std::endl;
}

void Zombie::announce(void) {
  std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
