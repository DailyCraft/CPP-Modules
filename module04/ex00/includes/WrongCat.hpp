/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:00:56 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 08:19:59 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &wrongCat);
	~WrongCat();

	void makeSound() const;

	WrongCat &operator=(const WrongCat &wrongcat);
};