/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 03:13:49 by juan-jof          #+#    #+#             */
/*   Updated: 2026/04/02 03:14:12 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	std::cout << "=== Creating FragTrap ===" << std::endl;
	FragTrap frag("F.R.A.G-TP");

	std::cout << "\n=== Testing FragTrap attack ===" << std::endl;
	frag.attack("Enemy");
	frag.attack("Enemy");

	std::cout << "\n=== Testing inherited methods ===" << std::endl;
	frag.takeDamage(40);
	frag.beRepaired(20);

	std::cout << "\n=== Testing special ability ===" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n=== Destructor ===" << std::endl;
	return (0);
}