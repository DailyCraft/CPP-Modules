/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:28:52 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/06 11:00:36 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ScavTrap foo("Foo");
	FragTrap bar("Bar");

	foo.guardGate();
	bar.highFivesGuys();

	foo.attack(bar.getName());
	bar.takeDamage(foo.getAttackDamage());

	bar.attack(foo.getName());
	foo.takeDamage(bar.getAttackDamage());
}