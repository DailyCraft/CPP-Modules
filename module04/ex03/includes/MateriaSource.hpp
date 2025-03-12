/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:32:14 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/12 08:09:56 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	AMateria *memory[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &source);
	~MateriaSource();

	MateriaSource &operator=(const MateriaSource &source);

	void learnMateria(AMateria *materia);
	AMateria *createMateria(const std::string &type);
};
