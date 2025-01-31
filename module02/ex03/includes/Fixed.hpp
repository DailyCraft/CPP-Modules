/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:03:29 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/29 15:55:12 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
private:
	int raw;
	static const int bits = 8;
	
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int number);
	Fixed(const float number);
	~Fixed();

	float toFloat() const;
	int toInt() const;

	int getRawBits() const;
	void setRawBits(const int raw);

	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);

	Fixed &operator=(const Fixed &fixed);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	Fixed operator+(const Fixed &fixed);
	Fixed operator-(const Fixed &fixed);
	Fixed operator*(const Fixed &fixed);
	Fixed operator/(const Fixed &fixed);

	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;
	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);