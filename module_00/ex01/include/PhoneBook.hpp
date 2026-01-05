/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 16:34:40 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/04 23:10:27 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact Contacts[8];
		int		size;
		int		nextIndex;

		void	displayTable() const;
		void	displayContact(int index) const;
		std::string	truncate(std::string str) const;
		
	public:
		PhoneBook();
		void	addContact();
		void	searchContact();
	
};

#endif