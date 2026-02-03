/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 03:40:06 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/09 01:05:25 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name), weapon(NULL) {
	// Weapon se inicializa a NULL (aun no tiene arma)
}

HumanB::~HumanB() {
	
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon; // Guarda direccion del arma
}

void	HumanB::attack() {
	if (this->weapon == NULL)
		std::cout << this->name << " has no weapon!" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}