/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:00:31 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/13 09:09:58 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

// void randomChump(std::string name) {
//   Zombie *Malakas = newZombie(name);
//   Malakas->announce();
//   delete Malakas;
// }

void randomChump(std::string name) {
  Zombie Malakas(name);
  Malakas.announce();
}
