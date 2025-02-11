/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:02:33 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/28 09:01:42 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie {
	std::string name;

public:
	Zombie();
	Zombie(const std::string &name);
	~Zombie();

	void setName(const std::string &name);
	void announce() const;
};

Zombie *zombieHorde(int n, const std::string &name);