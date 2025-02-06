/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:28:52 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/06 17:27:29 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap foo("Foo");
	DiamondTrap bar("Bar");

	foo.attack(bar.getName());
	bar.takeDamage(foo.getAttackDamage());
	foo.whoAmI();
	foo.guardGate();
	foo.highFivesGuys();
}