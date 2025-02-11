/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:04:54 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 10:53:44 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor call" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &cat): Animal(cat) {
	std::cout << "Cat copy constructor call" << std::endl;
	*this = cat;
}

Cat::~Cat() {
	std::cout << "Cat destructor call" << std::endl;
	delete brain;
}

Cat &Cat::operator=(const Cat &cat) {
	std::cout << "Cat assignment operator call" << std::endl;
	type = cat.type;
	brain = new Brain(*cat.brain);
	return *this;
}

Brain *Cat::getBrain() const {
	return brain;
}

void Cat::makeSound() const {
	std::cout << "Mew... Mewwwwwwwww..." << std::endl;
}
