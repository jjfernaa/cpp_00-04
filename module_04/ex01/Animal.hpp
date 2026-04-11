/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 02:44:51 by juan-jof          #+#    #+#             */
/*   Updated: 2026/04/03 02:45:25 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal();
	
		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif