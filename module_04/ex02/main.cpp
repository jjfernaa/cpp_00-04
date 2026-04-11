/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-jof <juan-jof@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 03:16:14 by juan-jof          #+#    #+#             */
/*   Updated: 2026/04/11 03:17:19 by juan-jof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "=== Testing array of Animals ===" << std::endl;
	const Animal* animals[4];

	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();

	std::cout << "\n=== Testing sounds ===" << std::endl;
	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();

	std::cout << "\n=== Deleting animals ===" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "\n=== Testing deep copy ===" << std::endl;
	Dog originalDog;
	originalDog.makeSound();
	
	Dog copiedDog = originalDog;
	copiedDog.makeSound();

	std::cout << "\n=== Testing Cat copy ===" << std::endl;
	Cat originalCat;
	originalCat.makeSound();
	
	Cat copiedCat;
	copiedCat = originalCat;
	copiedCat.makeSound();

	return (0);
}