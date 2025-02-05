/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:09:19 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 08:33:51 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

static void say(const Animal &animal) {
	std::cout << std::endl;
	std::cout << animal.getType() << " says: ";
	animal.makeSound();
	std::cout << std::endl;
}

static void say(const WrongAnimal &animal) {
	std::cout << std::endl;
	std::cout << animal.getType() << " says: ";
	animal.makeSound();
	std::cout << std::endl;
}

int main() {
	say(Animal());
	say(Cat());
	say(Dog());
	say(WrongAnimal());
	say(WrongCat());
}