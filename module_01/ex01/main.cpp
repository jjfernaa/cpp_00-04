/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 02:28:47 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/07 04:11:57 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;

	std::cout << "==== CREATIING HORDE ====" << std::endl;
	Zombie *horde = zombieHorde(N, "ZombieHorde");

	std::cout << "\n==== ANNOUNCING HORDE ====" << std::endl;
	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}

	std::cout << "\n==== DESTROYING HORDE ====" << std::endl;
	delete[] horde;

	return (0);
}