/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 02:29:06 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/07 04:03:54 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return NULL;

	Zombie *horde = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
	}
	return (horde);
}