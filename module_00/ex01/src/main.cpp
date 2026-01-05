/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 03:14:45 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/05 01:41:47 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	 main()
{
	PhoneBook phonebook;
	std::string input;

	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "\nEOF detected, Exiting..." << std::endl;
			break ;
		}
		if ( input == "EXIT")
			break ;
		if (input == "ADD")
		{
			phonebook.addContact();
		}
		else if (input == "SEARCH")
		{
			phonebook.searchContact();
		}
		else
		{
			std::cout << "Invalid input!" << std::endl;
			
		}
	}
	return (0);
}