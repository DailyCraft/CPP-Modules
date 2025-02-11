/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:38:11 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/05 13:38:01 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const std::string &name): name(name) {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &character) {
	*this = character;
}

Character::~Character() {
	for (int i = 0; i < 4 && inventory[i] != NULL; i++)
		delete inventory[i];
}

Character &Character::operator=(const Character &character) {
	name = character.getName();
	for (int i = 0; i < 4; i++) {
		if (inventory[i] != NULL)
			delete inventory[i];
		inventory[i] = character.inventory[i] ? character.inventory[i]->clone() : NULL;
	}
	return *this;
}

const std::string &Character::getName() const {
	return name;
}

void Character::equip(AMateria *materia) {
	for (int i = 0; i < 4; i++) {
		if (inventory[i] == NULL) {
			inventory[i] = materia;
			break;
		}
	}
}

void Character::unequip(int index) {
	if (index < 0 || index >= 4)
		return;

	for (int i = index + 1; i < 4; i++)
		inventory[i - 1] = inventory[i];
	inventory[3] = NULL;
}

void Character::use(int index, ICharacter &target) {
	if (index >= 0 && index < 4 && inventory[index] != NULL)
		inventory[index]->use(target);
}
