/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:48:42 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/13 09:59:31 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main () {
	Zombie *Malakes;

	Malakes = zombieHorde(10, "malakas");

	for (int i = 0; i < 10; i++)
		Malakes[i].announce();
	
	delete[] Malakes;

	return 0;
}
