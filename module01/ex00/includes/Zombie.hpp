/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:02:33 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/28 08:12:29 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie {
	std::string name;

public:
	Zombie(const std::string &name);
	~Zombie();

	void announce() const;
};

Zombie *newZombie(const std::string &name);
void randomChump(const std::string &name);