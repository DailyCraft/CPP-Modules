/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:01:12 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/28 08:20:32 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
	std::cout << "--- New zombie on stack ---" << std::endl;
	Zombie stackZombie("Stack");
	stackZombie.announce();

	std::cout << std::endl << "--- New zombie on heap ---" << std::endl;
	Zombie *heapZombie = newZombie("Heap");
	heapZombie->announce();
	delete heapZombie;

	std::cout << std::endl << "--- Random Chump ---" << std::endl;
	randomChump("Bar");

	std::cout << std::endl;
}