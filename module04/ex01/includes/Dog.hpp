/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:00:24 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 08:54:15 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	Brain *brain;

public:
	Dog();
	Dog(const Dog &dog);
	~Dog();

	Brain *getBrain() const;
	void makeSound() const;

	Dog &operator=(const Dog &dog);
};
