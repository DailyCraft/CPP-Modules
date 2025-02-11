/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:04:54 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 10:53:13 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor call" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &dog): Animal(dog) {
	std::cout << "Dog copy constructor call" << std::endl;
	*this = dog;
}

Dog::~Dog() {
	std::cout << "Dog destructor call" << std::endl;
	delete brain;
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << "Dog assignment operator call" << std::endl;
	type = dog.type;
	brain = new Brain(*dog.brain);
	return *this;
}

Brain *Dog::getBrain() const {
	return brain;
}

void Dog::makeSound() const {
	std::cout << "Woof Woof" << std::endl;
}
