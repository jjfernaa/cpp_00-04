/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 01:07:31 by juan-jof          #+#    #+#             */
/*   Updated: 2026/03/26 04:08:36 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	
	Fixed	a(10);
	Fixed	b(20);

	std::cout << "\n=== Operadores aritméticos ===" << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;

	std::cout << "\n=== Operadores de comparación ===" << std::endl;
	std::cout << a << " > " << b << " : " << (a > b ? "true" : "false") << std::endl;
	std::cout << a << " < " << b << " : " << (a < b ? "true" : "false") << std::endl;
	std::cout << a << " >= " << b << " : " << (a >= b ? "true" : "false") << std::endl;
	std::cout << a << " <= " << b << " : " << (a <= b ? "true" : "false") << std::endl;
	std::cout << a << " == " << b << " : " << (a == b ? "true" : "false") << std::endl;
	std::cout << a << " != " << b << " : " << (a != b ? "true" : "false") << std::endl;

	std::cout << "\n=== Funciones estáticas ===" << std::endl;
	std::cout << "min(" << a << ", " << b << ") = " << Fixed::min(a, b) << std::endl;
	std::cout << "max(" << a << ", " << b << ") = " << Fixed::max(a, b) << std::endl;

	std::cout << "\n== Con const ==" << std::endl;
	Fixed const c(10.5f);
	Fixed const d(20.5f);
	std::cout << "min(" << c << ", " << d << ") = " << Fixed::min(c, d) << std::endl;
	std::cout << "max(" << c << ", " << d << ") = " << Fixed::max(c, d) << std::endl;

	return (0);
}