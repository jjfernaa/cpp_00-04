/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 02:59:44 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/05 01:41:12 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	firstName = "";
	lastName  = "";
	nickName = "";
	phoneNumber = "";
	darkestSecret = "";
}
Contact::Contact(std::string _firstName, std::string _lastName,
				std::string _nickName, std::string _phoneNumber, std::string _darkestSecret)
{
	firstName = _firstName;
	lastName = _lastName;
	nickName = _nickName;
	phoneNumber = _phoneNumber;
	darkestSecret = _darkestSecret;
}
// Getters
std::string Contact::getFirstName() const
{
		return (firstName);
}
std::string Contact::getLastName() const
{
	return (lastName);
}
std::string Contact::getNickName() const
{
	return (nickName);
}
std::string Contact::getPhoneNumber() const
{
	return (phoneNumber);
}
std::string Contact::getDarkestSecret() const
{
	return (darkestSecret);
}
// Setters

void	Contact::setFirstName(std::string _firstName)
{
	firstName = _firstName;
}
void	Contact::setLastName(std::string _lastName)
{
	lastName = _lastName;
}
void	Contact::setNickName(std::string _nickName)
{
	nickName = _nickName;
}
void	Contact::setPhoneNumber(std::string _phoneNumber)
{
	phoneNumber = _phoneNumber;
}
void	Contact::setDarkestSecret(std::string _darkestSecret)
{
	darkestSecret = _darkestSecret;
}
