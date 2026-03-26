/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 01:07:34 by juan-jof          #+#    #+#             */
/*   Updated: 2026/03/26 04:02:03 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed &operator=(Fixed const &rhs);
		~Fixed(void);
		
		//Constructores de conversion
		Fixed(int const n);
		Fixed(float const f);
		
		//Metodos de conversion
		int		toInt(void) const;
		float 	toFloat(void) const;
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		//Operadores de inremento/decremento
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		//Operadores aritmeticos
		Fixed 	operator+(Fixed const &rhs) const;	
		Fixed 	operator-(Fixed const &rhs) const;
		Fixed 	operator*(Fixed const &rhs) const;
		Fixed 	operator/(Fixed const &rhs) const;

		//Operadores de conparacion
		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;
		
		//Funciones estaticas
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed  &a, Fixed &b);
		static const Fixed 	&max(Fixed const &a, Fixed const &b);
};

// Sobrecarga del operador de flujo
std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif