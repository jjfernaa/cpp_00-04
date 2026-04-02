/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 02:35:45 by juan-jof          #+#    #+#             */
/*   Updated: 2026/04/02 02:55:02 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	std::cout << "=== Creating ScavTrap ===" << std::endl;
	ScavTrap scav("S.C.A.V-TP");

	std::cout << "\n=== Testing ScavTrap attack ===" << std::endl;
	scav.attack("Enemy");
	scav.attack("Enemy");

	std::cout << "\n=== Testing inherited methods ===" << std::endl;
	scav.takeDamage(30);
	scav.beRepaired(10);

	std::cout << "\n=== Testing special ability ===" << std::endl;
	scav.guardGate();

	std::cout << "\n=== Destructor ===" << std::endl;
	return (0);
}