/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:32:14 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/05 12:29:17 by dvan-hum         ###   ########.fr       */
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

	void learnMateria(AMateria *materia);
	AMateria *createMateria(const std::string &type);
};
