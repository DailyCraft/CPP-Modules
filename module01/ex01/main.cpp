/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:01:12 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/28 08:50:50 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
	std::cout << "--- Create 50 zombies ---" << std::endl;
	Zombie *zombies = zombieHorde(50, "Foo");
	for (int i = 0; i < 50; i++) {
		std::cout << "Announce #" << i << ": ";
		zombies->announce();
	}

	std::cout << std::endl << "--- Delete zombies ---" << std::endl;
	delete[] zombies;
}