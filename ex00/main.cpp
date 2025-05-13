/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 08:41:42 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/13 09:09:33 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main() {

  Zombie Chiara("Chiara");
  Chiara.announce();

  Zombie *Lucie = newZombie("Lucie");
  Lucie->announce();

  randomChump("Malakas");

  delete Lucie;
  return 0;
}
