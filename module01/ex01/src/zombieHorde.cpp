/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:25:00 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/28 09:01:42 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, const std::string &name) {
	Zombie *zombies = new Zombie[n];

	for (int i = 0; i < n; i++)
		zombies[i].setName(name);
	return zombies;
}