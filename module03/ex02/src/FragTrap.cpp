/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:23:19 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 09:52:49 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap initialized with no name" << std::endl;
	hitPoints = 100;
	energy = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
	hitPoints = 100;
	energy = 100;
	attackDamage = 30;
	std::cout << "FragTrap initialized with values: "
			<< "name: " << name
			<< ", hit points: " << hitPoints
			<< ", energy points: " << energy
			<< ", attack damage: " << attackDamage << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap): ClapTrap(FragTrap) {
	std::cout << "Copy constructor of FragTrap called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor of FragTrap " << name << " called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &FragTrap) {
	std::cout << "Assignment operator of FragTrap called" << std::endl;
	name = FragTrap.name;
	hitPoints = FragTrap.hitPoints;
	energy = FragTrap.energy;
	attackDamage = FragTrap.attackDamage;
	return *this;
}

void FragTrap::highFivesGuys() const {
	std::cout << "FragTrap " << name << ": Who want make an high fives with me?" << std::endl;
}
