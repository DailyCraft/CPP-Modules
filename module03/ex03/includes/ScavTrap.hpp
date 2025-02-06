/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:22:52 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/06 16:58:41 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const ScavTrap &scavTrap);
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &scavTrap);

	void attack(const std::string &target);	
	void guardGate();
};