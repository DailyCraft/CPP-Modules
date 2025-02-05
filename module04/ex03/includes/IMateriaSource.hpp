/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:30:42 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/05 11:59:09 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {};

	virtual void learnMateria(AMateria *materia) = 0;
	virtual AMateria *createMateria(const std::string &type) = 0;
};