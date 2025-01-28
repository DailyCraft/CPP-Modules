/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:59:25 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/28 09:18:16 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon &weapon);
};