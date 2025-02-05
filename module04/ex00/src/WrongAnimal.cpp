/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:02:45 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 08:25:41 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Known") {
	std::cout << "Wrong Animal constructor call" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
	std::cout << "Wrong Animal copy constructor call" << std::endl;
	*this = animal;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal destructor call" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "...rrrG" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal) {
	std::cout << "Wrong Animal assignment operator call" << std::endl;
	type = animal.type;
	return *this;
}
