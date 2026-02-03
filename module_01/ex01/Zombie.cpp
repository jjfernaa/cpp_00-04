/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 02:28:50 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/07 03:47:55 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("_name") {
}

Zombie::~Zombie() {
	std::cout << name << " destroid complete" << std::endl;
}

void	Zombie::setName(std::string n_name) {
	name = n_name;
}

void	Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}