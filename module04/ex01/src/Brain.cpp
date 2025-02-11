/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 08:44:40 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 10:07:00 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor call" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
}

Brain::Brain(const Brain &brain) {
	std::cout << "Brain copy constructor call" << std::endl;
	*this = brain;
}

Brain::~Brain() {
	std::cout << "Brain destructor call" << std::endl;
}

Brain &Brain::operator=(const Brain &brain) {
	std::cout << "Brain assignment operator call" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
	return *this;
}

std::string &Brain::getIdea(int index) {
	return ideas[index];
}
