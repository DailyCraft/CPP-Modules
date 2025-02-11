/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:26:39 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/05 08:48:28 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter {
	std::string name;
	AMateria *inventory[4];

public:
	Character();
	Character(const std::string &name);
	Character(const Character &character);
	~Character();

	Character &operator=(const Character &character);

	const std::string &getName() const;

	void equip(AMateria *materia);
	void unequip(int index);
	void use(int index, ICharacter &target);
};
