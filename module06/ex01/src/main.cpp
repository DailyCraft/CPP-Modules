/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:25:37 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 09:48:36 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data data = {.name = "Foo", .experience = 42.42, .pos = {-1, 0, 1}};
	std::cout << data << std::endl;

	std::cout << std::endl << "Converting..." << std::endl << std::endl;
	uintptr_t ptr = Serializer::serialize(&data);
	Data* dataPtr = Serializer::deserialize(ptr);

	std::cout << *dataPtr << std::endl;
}