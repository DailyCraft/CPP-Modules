/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:53:09 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/12 08:12:25 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure &cure): AMateria(cure) {}

Cure::~Cure() {}

AMateria *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
