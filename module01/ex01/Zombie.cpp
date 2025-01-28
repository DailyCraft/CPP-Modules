/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:02:31 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/28 09:01:42 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name): name(name) {}

Zombie::~Zombie() {
	std::cout << "Destructor call of zombie " << name << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}