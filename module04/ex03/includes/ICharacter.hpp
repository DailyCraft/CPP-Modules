/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:25:06 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/05 11:59:23 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AMateria.hpp"

class ICharacter {
public:
	virtual ~ICharacter() {}

	virtual const std::string &getName() const = 0;

	virtual void equip(AMateria *materia) = 0;
	virtual void unequip(int index) = 0;
	virtual void use(int index, ICharacter &target) = 0;
};
