/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 01:32:29 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/08 02:06:13 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{	// Create string
	std::string str = "HI THIS IS BRAIN";
	// Create pointer
	std::string *stringPTR = &str;
	// Create reference to string
	std::string &stringREF = str;
	// Print memory addresses
	std::cout << "==== PRINT MEMORY ADDRESSES ====" << std::endl;
	std::cout << "\nMemory address of string:   " << &str << std::endl;
	std::cout << "Memory address in stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address in stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	// Print values
	std::cout << "==== PRINT VALUES ====" << std::endl;
	std::cout << "\nValue of string:   " << str << std::endl;
	std::cout << "Value via stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value via stringREF: " << stringREF << std::endl;
	
	return (0);
}
