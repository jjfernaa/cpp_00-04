/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 02:03:46 by juan-jof          #+#    #+#             */
/*   Updated: 2026/04/02 02:06:18 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	
	ClapTrap robot("C.L.A.P-TP");	
	std::cout << "\n=== Testing attack ===" << std::endl;
	robot.attack("Enemy");
	robot.attack("Enemy");
	robot.attack("Enemy");

	std::cout << "\n=== Testing takeDamage ===" << std::endl;
	robot.takeDamage(3);
	robot.takeDamage(3);
	robot.takeDamage(3);

	std::cout << "\n=== Testing beRepaired ===" << std::endl;
	robot.beRepaired(2);
	robot.beRepaired(2);

	std::cout << "\n=== Testing when out of energy ===" << std::endl;
	for (int i = 0; i < 10; i++)
		robot.attack("Target");

		std::cout << "\n=== Testing when out of HP ===" << std::endl;
	robot.takeDamage(100);
	robot.attack("Target");
	robot.beRepaired(5);

	return (0);
}