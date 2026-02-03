/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 05:19:46 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/08 05:26:52 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main() {
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA Juan("Juan", club);
		Juan.attack();
		club.setType("some other type of club");
		Juan.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	Mark("Mark");
		Mark.setWeapon(club);
		Mark.attack();
		club.setType("some other type of club");
		Mark.attack();
	}
	return (0);
}