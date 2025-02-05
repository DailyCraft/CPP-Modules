/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:24:45 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/05 12:01:33 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : type(type) {}

AMateria::AMateria(const AMateria &materia): type(materia.getType()) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &materia __attribute__((unused))) {
	return *this;
}

const std::string &AMateria::getType() const {
	return type;
}
