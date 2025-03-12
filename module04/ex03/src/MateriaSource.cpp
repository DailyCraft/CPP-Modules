/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:14:55 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/12 08:13:10 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &source) {
	*this = source;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4 && memory[i] != NULL; i++)
		delete memory[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &source) {
	for (int i = 0; i < 4; i++) {
		if (source.memory[i] != NULL)
			memory[i] = source.memory[i]->clone();
		else
			memory[i] = NULL;
	}

	return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++) {
		if (memory[i] == NULL) {
			memory[i] = materia;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4 && memory[i] != NULL; i++)
		if (memory[i]->getType() == type)
			return memory[i]->clone();

	return NULL;
}
