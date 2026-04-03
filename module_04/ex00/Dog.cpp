/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 02:47:58 by juan-jof          #+#    #+#             */
/*   Updated: 2026/04/03 02:49:27 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	Animal::operator=(rhs);
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof Woof!" << std::endl;
}
