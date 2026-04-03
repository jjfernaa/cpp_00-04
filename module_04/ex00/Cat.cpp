/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 02:50:52 by juan-jof          #+#    #+#             */
/*   Updated: 2026/04/03 02:51:23 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow Meow!" << std::endl;
}