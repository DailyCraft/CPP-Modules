/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:24:11 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/05 13:38:32 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main() {
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character me_character("me");
	ICharacter &me = me_character;

	me.equip(src->createMateria("ice"));
	me.equip(src->createMateria("cure"));

	AMateria *tmp = src->createMateria("ice");
	me.equip(tmp);

	ICharacter *bob = new Character("bob");
	me.use(0, *bob);
	me.use(1, *bob);
	me.use(2, *bob);
	me.use(3, *bob);
	me.use(4, *bob);

	me.unequip(2);

	me_character = Character("me");

	delete bob;
	delete src;
	delete tmp;
}
