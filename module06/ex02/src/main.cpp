/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:57:22 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 11:01:18 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {
	switch (rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	default:
		return new C();
	}
}

void identify(Base* base) {
	if (dynamic_cast<A*>(base) != NULL)
		std::cout << "The type is A." << std::endl;
	else if (dynamic_cast<B*>(base) != NULL)
		std::cout << "The type is B." << std::endl;
	else if (dynamic_cast<C*>(base) != NULL)
		std::cout << "The type is C." << std::endl;
	else
		throw std::runtime_error("Unknown type");
}

void identify(Base& base) {
	try {
		(void) dynamic_cast<A&>(base);
		std::cout << "The type is A." << std::endl;
		return;
	} catch (std::exception& e) {}
	try {
		(void) dynamic_cast<B&>(base);
		std::cout << "The type is B." << std::endl;
		return;
	} catch (std::exception& e) {}
	try {
		(void) dynamic_cast<C&>(base);
		std::cout << "The type is C." << std::endl;
		return;
	} catch (std::exception& e) {}
	
	throw std::runtime_error("Unknown type");
}

int main() {
	srand(time(0));
	Base* base = generate();
	identify(base);
	identify(*base);
	delete base;
}