/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:28:52 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/06 10:42:10 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main() {
	ScavTrap foo("Foo");
	ScavTrap bar("Bar");

	foo.attack(bar.getName());
	bar.takeDamage(foo.getAttackDamage());
	bar.beRepaired(4);

	std::cout << std::endl << "Now, Bar is fatal!" << std::endl << std::endl;
	bar.setAttackDamage(200);
	bar.attack(foo.getName());
	foo.takeDamage(bar.getAttackDamage());
	foo.beRepaired(2);

	bar.guardGate();
}