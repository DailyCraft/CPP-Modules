/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:00:56 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 08:54:21 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	Brain *brain;

public:
	Cat();
	Cat(const Cat &cat);
	~Cat();

	Brain *getBrain() const;
	void makeSound() const;

	Cat &operator=(const Cat &cat);
};
