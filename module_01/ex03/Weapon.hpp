/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 03:40:14 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/08 04:45:31 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string _type); // Constructor con tipo inicial
		~Weapon();
		const std::string& getType() const; // Getter (referencia constante)
		void setType(std::string newType); // Setter
};

#endif