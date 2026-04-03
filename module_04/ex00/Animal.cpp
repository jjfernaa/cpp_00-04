/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 02:46:14 by juan-jof          #+#    #+#             */
/*   Updated: 2026/04/03 02:47:28 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src) : type(src.type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
	return (this->type);
}
