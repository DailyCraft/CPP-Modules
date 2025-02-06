/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:30:42 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/06 18:50:38 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), hitPoints(10), energy(10), attackDamage(0) {
	std::cout << "ClapTrap initialized with no name" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	std::cout << "Copy constructor of ClapTrap called" << std::endl;
	*this = clapTrap;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energy(10), attackDamage(0) {
	std::cout << "ClapTrap initialized with values: "
		<< "name: " << name
		<< ", hit points: " << hitPoints
		<< ", energy points: " << energy
		<< ", attack damage: " << attackDamage << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor of ClapTrap " << name << " called, final values: "
		<< "name: " << name
		<< ", hit points: " << hitPoints
		<< ", energy points: " << energy
		<< ", attack damage: " << attackDamage << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
	std::cout << "Assignment operator of ClapTrap called" << std::endl;
	name = clapTrap.name;
	hitPoints = clapTrap.hitPoints;
	energy = clapTrap.energy;
	attackDamage = clapTrap.attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (hitPoints <= 0) {
		std::cout << "ClapTrap " << name << " cannot attack. It is dead!" << std::endl;
	} else if (energy <= 0) {
		std::cout << "ClapTrap " << name << " doesn't have enough energy to attack" << std::endl;
	} else {
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints <= 0) {
		std::cout << "ClapTrap " << name << " cannot received damage. It is already dead!" << std::endl;
	} else {
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
		hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints <= 0) {
		std::cout << "ClapTrap " << name << " cannot repairs itself. It is dead!" << std::endl;
	} else if (energy <= 0) {
		std::cout << "ClapTrap " << name << " doesn't have enough energy to repairs itself" << std::endl;
	} else {
		std::cout << "ClapTrap " << name << " repairs itself of " << amount << " point(s)" << std::endl;
		hitPoints += amount;
		energy--;
	}
}

std::string ClapTrap::getName() {
	return name;
}

int ClapTrap::getHitPoints() {
	return hitPoints;
}

int ClapTrap::getEnergy() {
	return energy;
}

int ClapTrap::getAttackDamage() {
	return attackDamage;
}

void ClapTrap::setName(std::string name) {
	this->name = name;
}

void ClapTrap::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
}

void ClapTrap::setEnergy(int energy) {
	this->energy = energy;
}

void ClapTrap::setAttackDamage(int attackDamage) {
	this->attackDamage = attackDamage;
}