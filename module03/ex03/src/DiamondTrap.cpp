/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:23:19 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/06 18:59:28 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("_clap_name") {
	std::cout << "DiamondTrap initialized with no name" << std::endl;
	name = "";
	ScavTrap defaultScav;
	energy = defaultScav.getEnergy();
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name") {
	this->name = name;
	ScavTrap defaultScav;
	energy = defaultScav.getEnergy();
	std::cout << "DiamondTrap initialized with values: "
			<< "name: " << name
			<< ", hit points: " << hitPoints
			<< ", energy points: " << energy
			<< ", attack damage: " << attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap): ClapTrap(diamondTrap), ScavTrap(diamondTrap),
                                                          FragTrap(diamondTrap) {
	std::cout << "Copy constructor of DiamondTrap called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor of DiamondTrap " << name << " called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	std::cout << "Assignment operator of DiamondTrap called" << std::endl;
	name = diamondTrap.name;
	hitPoints = diamondTrap.hitPoints;
	energy = diamondTrap.energy;
	attackDamage = diamondTrap.attackDamage;
	return *this;
}

void DiamondTrap::whoAmI() const {
	std::cout << "The DiamondTrap name is " << name << " and its clap trap name is " << ClapTrap::name << std::endl;
}
