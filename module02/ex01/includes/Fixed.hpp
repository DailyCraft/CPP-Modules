/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:03:29 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/29 14:09:49 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
	int raw;
	static const int bits = 8;

public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(int number);
	Fixed(float number);
	~Fixed();

	float toFloat() const;
	int toInt() const;

	int getRawBits() const;
	void setRawBits(int raw);

	Fixed &operator=(const Fixed &fixed);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);