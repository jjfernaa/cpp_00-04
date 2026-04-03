/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 02:52:27 by juan-jof          #+#    #+#             */
/*   Updated: 2026/04/03 02:53:05 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		~WrongAnimal();

		void		makeSound() const;
		std::string	getType() const;
};

#endif