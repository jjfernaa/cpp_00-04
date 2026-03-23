/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 03:40:11 by juan-jof          #+#    #+#             */
/*   Updated: 2026/02/10 02:32:38 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type) {
}

Weapon::~Weapon() {
}

const	std::string& Weapon::getType() const {
	return this->type;
}

void	Weapon::setType(std::string newType) {
	this->type = newType;
}