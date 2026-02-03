/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 04:50:18 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/07 01:54:08 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "==== SIMPLE CHECK ====" << std::endl;
	Zombie zombie1("Juan");
	zombie1.announce();

	std::cout << "\n==== ZOMBIE IN HEAP ====" << std::endl;
	Zombie *heapZombie = newZombie("HeapZombie");
	heapZombie->announce();

	std::cout << "\n==== ZOMBIE IN STACK ====" << std::endl;
	randomChump("StackZombie");
	
	std::cout << "\n==== DESTROID ZOMBIE IN HEAP ====" << std::endl;
	delete heapZombie;
	
	std::cout << "\n==== END PROGRAM ====" << std::endl;
	
	return(0);
}