/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 03:46:59 by juan-jof          #+#    #+#             */
/*   Updated: 2026/03/26 04:05:01 by juan-jof         ###   ########.fr       */
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

Fixed	&Fixed::operator=(Fixed const &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

// Constructores de conversion
Fixed::Fixed(int const n) : _fixedPointValue(n * (1 << _fractionalBits)) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _fixedPointValue(roundf(f * (1 << _fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

//Metodos de conversion
int	Fixed::toInt(void) const {
	return (this->_fixedPointValue / (1 << _fractionalBits));
}

float	Fixed::toFloat(void) const {
	return ((float)this->_fixedPointValue / (1 << _fractionalBits));
}

//Getters y Setters
int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
}

//Operadores de incremento y decremento
Fixed	&Fixed::operator++(void) {
	this->_fixedPointValue += 1;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	this->_fixedPointValue += 1;
	return (tmp);
}

Fixed	&Fixed::operator--(void) {
	this->_fixedPointValue -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	this->_fixedPointValue -= 1;
	return (tmp);
}

//Operadores Aritmeticos
Fixed	Fixed::operator+(Fixed const &rhs) const {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

//Operadores de conparacion
bool	Fixed::operator>(Fixed const &rhs) const {
	return (this->_fixedPointValue > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const {
	return (this->_fixedPointValue < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const {
	return (this->_fixedPointValue >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const {
	return (this->_fixedPointValue <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const {
	return (this->_fixedPointValue == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const {
	return (this->_fixedPointValue != rhs.getRawBits());
}

//Funciones estaticas
Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a < b ? a : b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b) {
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a > b ? a : b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b) {
	return (a > b ? a : b);
}

//Sobrecarga operador de flujo
std::ostream &operator<<(std::ostream &o, Fixed const &fixed) {
	o << fixed.toFloat();
	return (o);
}
