/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:59:22 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 08:25:17 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAnimal {
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &animal);
	~WrongAnimal();

	std::string getType() const;
	void makeSound() const;

	WrongAnimal &operator=(const WrongAnimal &animal);
};