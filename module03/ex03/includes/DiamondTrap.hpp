/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:22:52 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/06 18:59:35 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap &scavTrap);
	DiamondTrap(std::string name);
	~DiamondTrap();

	DiamondTrap &operator=(const DiamondTrap &scavTrap);

	using ScavTrap::attack;
	void whoAmI();
};