/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 01:07:31 by juan-jof          #+#    #+#             */
/*   Updated: 2026/03/24 03:02:24 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
		
	std::cout << "a is " << a.toFloat() << " as float"<< std::endl;
	std::cout << "b is " << b.toFloat() << " as float"<< std::endl;
	std::cout << "c is " << c.toFloat() << " as float"<< std::endl;
	std::cout << "d is " << d.toFloat() << " as float"<< std::endl;

	Fixed e(5.05f);

	std::cout << "\n--- Check increment and decrease ---" << std::endl;
	std::cout << "e is " << e << std::endl;
	
	++e;
	std::cout << "++e is " << e << std::endl;

	e++;
	std::cout << "e++ is " << e << std::endl;

	--e;
	std::cout << "--e is " << e << std::endl;
	
	e--;
	std::cout << "e-- is " << e << std::endl;

	return (0);
}
