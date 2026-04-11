/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 03:05:37 by juan-jof          #+#    #+#             */
/*   Updated: 2026/04/11 03:09:55 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

Brain &Brain::operator=(const Brain &rhs) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdea(int index, std::string idea) {
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const {
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return ("");
}
