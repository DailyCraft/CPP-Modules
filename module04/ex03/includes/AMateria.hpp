/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:17:40 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/05 12:51:57 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ICharacter;

class AMateria {
protected:
	const std::string type;

public:
	AMateria(const std::string &type);
	AMateria(const AMateria &materia);
	virtual ~AMateria();

	AMateria &operator=(const AMateria &materia);

	const std::string &getType() const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target) = 0;
};
