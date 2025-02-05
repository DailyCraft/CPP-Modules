/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:22:52 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/06 19:02:08 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(const FragTrap &FragTrap);
	FragTrap(std::string name);
	~FragTrap();

	FragTrap &operator=(const FragTrap &FragTrap);

	void attack(const std::string &target);	
	void highFivesGuys();
};