/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:24:52 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/30 18:56:52 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ClapTrap {
	std::string name;
	int hitPoints;
	int energy;
	int attackDamage;

public:
	ClapTrap();
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap(const std::string &name);
	~ClapTrap();

	std::string getName();
	int getHitPoints() const;
	int getEnergy() const;
	int getAttackDamage() const;
	void setName(const std::string &name);
	void setHitPoints(int hitPoints);
	void setEnergy(int energy);
	void setAttackDamage(int attackDamage);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap &operator=(const ClapTrap &clapTrap);
};
