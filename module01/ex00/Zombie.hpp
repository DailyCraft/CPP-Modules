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
private:
	std::string name;

public:
	Zombie(std::string name);
	~Zombie();

	void announce();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);