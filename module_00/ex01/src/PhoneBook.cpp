/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 16:34:45 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/05 02:28:48 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cctype>
#include <iomanip>

PhoneBook::PhoneBook()
{
	size = 0;
	nextIndex = 0;
}
void	PhoneBook::addContact()
{
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
	
	std::cout << "First name: ";
	if (!std::getline(std::cin, firstName))
		return;
	if (firstName.empty())
	{
		std::cout << "Error: Empty First name input " << std::endl;
		return;
	}
	std::cout << "Last name: ";
	if (!std::getline(std::cin, lastName))
		return;
	if (lastName.empty())
	{
		std::cout << "Error: Empty Last name input " << std::endl;
		return;
	}
	std::cout << "Nick name: ";
	if (!std::getline(std::cin, nickName))
		return;
	if (nickName.empty())
	{
		std::cout << "Error: Empty Nick name input" << std::endl;
		return;
	}
	
	std::cout << "Phone number: ";
	if (!std::getline(std::cin, phoneNumber))
		return;
	if (phoneNumber.empty())
	{
		std::cout << "Error: Empty Phone number input" << std::endl;
		return;
	}
	for  (size_t i = 0; i < phoneNumber.size(); i++)
	{
		if(!isdigit(phoneNumber[i]))
		{
			std::cout << "Error: Phone number must contain only digits" << std::endl;
			return;
		}
	}
	std::cout << "Darkest secret: ";
	if (!std::getline(std::cin, darkestSecret))
		return;
	if (darkestSecret.empty())
	{
		std::cout << "Error: Empty Darkest secret input" << std::endl;
		return;
	}
	Contacts[nextIndex].setFirstName(firstName);
	Contacts[nextIndex].setLastName(lastName);
	Contacts[nextIndex].setNickName(nickName);
	Contacts[nextIndex].setPhoneNumber(phoneNumber);
	Contacts[nextIndex].setDarkestSecret(darkestSecret);
	
	if (size < 8)
		size++;
	
	nextIndex = (nextIndex + 1) % 8;

	std::cout << "Contact added successfully!" << std::endl;
}

void	PhoneBook::searchContact()
{
	if (size == 0)
	{
		std::cout << "Phonebook is empty. Add contacts first." << std::endl;
		return;
	}
	displayTable();

	std::string input;
	std::cout << "Enter index: ";
	if (!std::getline(std::cin, input))
		return;
	if (input.length() != 1 || !isdigit(input[0]))
	{
		std::cout << "Error: Invalid index" << std::endl;
		return;
	}
	int index = input[0] - '0';
	if (index < 0 || index >= size)
	{
		std::cout << "Error: Index out of range" << std::endl;
		return;
	}
	displayContact(index);
}

void	PhoneBook::displayTable() const
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << truncate(Contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << truncate(Contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << truncate(Contacts[i].getNickName());
		std::cout << "|" << std::endl;
	}
}

void	PhoneBook::displayContact(int index) const
{
	std::cout << "\n--- Contact Details ---" << std::endl;
	std::cout << "Index: " << index << std::endl;
	std::cout << "First Name: " << Contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << Contacts[index].getLastName() << std::endl;
	std::cout << "Nick Name: " << Contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << Contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << Contacts[index].getDarkestSecret() << std::endl;
	std::cout << "-----------------------\n" << std::endl;
}

std::string PhoneBook::truncate(std::string str) const
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	return str;
}

