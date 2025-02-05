/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:04:54 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 08:20:33 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "Wrong Cat constructor call" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongCat): WrongAnimal(wrongCat) {
	std::cout << "Wrong Cat copy constructor call" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat destructor call" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat) {
	std::cout << "Wrong Cat assignment operator call" << std::endl;
	type = wrongCat.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "...weM" << std::endl;
}