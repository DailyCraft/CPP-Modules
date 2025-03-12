/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:23:07 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 09:41:56 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

std::ostream &operator<<(std::ostream &os, const Data &data) {
	return os << "Name: " << data.name << std::endl
		<< "Experience: " << data.experience << std::endl
		<< "Position: (" << data.pos[0] << ", " << data.pos[1] << ", " << data.pos[2] << ')';
}
