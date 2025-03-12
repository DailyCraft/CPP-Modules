/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:21:39 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/12 08:12:08 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure &cure);
	~Cure();

	using AMateria::operator=;

	AMateria *clone() const;
	void use(ICharacter &target);
};
