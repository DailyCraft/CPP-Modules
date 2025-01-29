/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:05:40 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/28 10:53:02 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
		<< "I really do!" << std::endl
		<< std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" << std::endl
		<< "I cannot believe adding extra bacon costs more money." << std::endl
		<< "You didn't put enough bacon in my burger!" << std::endl
		<< "If you did, I wouldn't be asking for more!" << std::endl
		<< std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" << std::endl
		<< "I think I deserve to have some extra bacon for free." << std::endl
		<< "I've been coming for years whereas you started working here since last month." << std::endl
		<< std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl
		<< "This is unacceptable! I want to speak to the manager now." << std::endl
		<< std::endl;
}

void Harl::complain(std::string level) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int filter = -1;

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			filter = i;
			break;
		}
	}
	
	switch (filter)
	{
	case 0:
		debug();
	case 1:
		info();
	case 2:
		warning();
	case 3:
		error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}