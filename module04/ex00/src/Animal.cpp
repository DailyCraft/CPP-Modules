/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:02:45 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 08:14:07 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Unknown") {
	std::cout << "Animal constructor call" << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << "Animal copy constructor call" << std::endl;
	*this = animal;
}

Animal::~Animal() {
	std::cout << "Animal destructor call" << std::endl;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Grrr..." << std::endl;
}

Animal &Animal::operator=(const Animal &animal) {
	std::cout << "Animal assignment operator call" << std::endl;
	type = animal.type;
	return *this;
}
