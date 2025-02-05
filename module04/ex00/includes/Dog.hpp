/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:00:24 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 08:20:52 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal {
public:
	Dog();
	Dog(const Dog &dog);
	~Dog();

	void makeSound() const;
	Dog &operator=(const Dog &dog);
};