/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 03:40:03 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/08 05:02:47 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string name;
		Weapon &weapon; // Referencia (Siempre tiene arma)
	public:
		HumanA(std::string _name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif