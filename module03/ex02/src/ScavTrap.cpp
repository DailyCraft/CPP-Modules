/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:23:19 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/06 10:45:44 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap initialized with no name" << std::endl;
	hitPoints = 200;
	energy = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	hitPoints = 100;
	energy = 50;
	attackDamage = 20;
	std::cout << "ScavTrap initialized with values: "
		<< "name: " << name
		<< ", hit points: " << hitPoints
		<< ", energy points: " << energy
		<< ", attack damage: " << attackDamage << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap): ClapTrap(scavTrap) {
	std::cout << "Copy constructor of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor of ScavTrap " << name << " called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap) {
	std::cout << "Assignment operator of ScavTrap called" << std::endl;
	name = scavTrap.name;
	hitPoints = scavTrap.hitPoints;
	energy = scavTrap.energy;
	attackDamage = scavTrap.attackDamage;
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	if (hitPoints <= 0) {
		std::cout << "ScavTrap " << name << " cannot attack. It is dead!" << std::endl;
	} else if (energy <= 0) {
		std::cout << "ScavTrap " << name << " doesn't have enough energy to attack" << std::endl;
	} else {
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energy--;
	}
}

void ScavTrap::guardGate() const {
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode" << std::endl;
}
