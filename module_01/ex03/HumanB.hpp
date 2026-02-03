/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 03:40:08 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/09 01:04:50 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon		*weapon; // PUNTERO (puede no tener arma)
public:
	HumanB(std::string _name);
	~HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack();
};

#endif