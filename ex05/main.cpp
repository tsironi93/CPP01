/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:37:15 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/15 08:38:59 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int main () {

	Harl harl;

	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("RANDOM BULLSHIT");
	harl.complain("ERROR");




	return 0;
}
