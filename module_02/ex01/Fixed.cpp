/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 03:46:55 by juan-jof          #+#    #+#             */
/*   Updated: 2026/03/24 03:33:32 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}



Fixed::Fixed(int const n) : _fixedPointValue(n * (1 << _fractionalBits)) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _fixedPointValue(roundf(f * (1 << _fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

int	Fixed::toInt(void) const {
	return (this->_fixedPointValue / (1 << _fractionalBits));
}

float	Fixed::toFloat(void) const {
	return ((float)this->_fixedPointValue / (1 << _fractionalBits));
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

Fixed &Fixed::operator++(void) {
	this->_fixedPointValue += 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->_fixedPointValue += 1;
	return (tmp);
}

Fixed &Fixed::operator--(void) {
	this->_fixedPointValue -= 1;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	this->_fixedPointValue -= 1;
	return (tmp);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed) {
	o << fixed.toFloat();
	return (o);
}