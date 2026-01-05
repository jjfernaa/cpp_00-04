/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 16:34:34 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/04 22:10:36 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private: 
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string	phoneNumber;
		std::string darkestSecret;
	
	public:
		// Constructores
		Contact();
		Contact(std::string _firstName, std::string _lastName,
				std::string _nickName, std::string _phoneNumber, std::string _darkestSecret);
		
		// Getters
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
		
		// Setters 
		void	setFirstName(std::string _firstName);
		void	setLastName(std::string _lastName);
		void	setNickName(std::string _nickName);
		void	setPhoneNumber(std::string _phoneNumber);
		void	setDarkestSecret(std::string _darkestSecret);
};

#endif