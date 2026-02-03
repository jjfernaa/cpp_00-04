/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 02:36:32 by juan-jof          #+#    #+#             */
/*   Updated: 2026/01/06 05:08:26 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name) : name(_name)
{
	std::cout << "zombie " << name << " Create" << std::endl;
} 
Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " Destroid" << std::endl;
}
void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiinnnzzzZ..." << std::endl;
}