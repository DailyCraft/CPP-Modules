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
private:
	std::string name;
	int hitPoints;
	int energy;
	int attackDamage;

public:
	ClapTrap();
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap(std::string name);
	~ClapTrap();

	std::string getName();
	int getHitPoints();
	int getEnergy();
	int getAttackDamage();
	void setName(std::string name);
	void setHitPoints(int hitPoints);
	void setEnergy(int energy);
	void setAttackDamage(int attackDamage);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap &operator=(const ClapTrap &clapTrap);
};