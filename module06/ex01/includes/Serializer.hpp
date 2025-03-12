/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:16:45 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 11:00:15 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

struct Data {
	std::string name;
	float experience;
	float pos[3];
};

std::ostream& operator<<(std::ostream& os, const Data& data);

class Serializer {
	Serializer();

public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};