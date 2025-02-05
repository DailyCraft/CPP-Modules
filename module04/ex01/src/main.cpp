/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:09:19 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 10:48:39 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	Animal *animals[50];

	for (int i = 0; i < 25; i++) {
		Dog *dog = new Dog();
		dog->getBrain()->getIdea(0) = "Do I love meat?";
		animals[i] = dog;
	}
	
	for (int i = 25; i < 50; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 5; i++) {
		std::cout << std::endl;
		Dog *dog = static_cast<Dog *>(animals[i]);
		Dog copy(*dog);
		std::cout << "Idea: " << copy.getBrain()->getIdea(0) << std::endl;
		dog->getBrain()->getIdea(0) = "I love meat!";
		std::cout << "Idea: " << copy.getBrain()->getIdea(0) << std::endl;
	}

	for (int i = 0; i < 50; i++)
		delete animals[i];
}