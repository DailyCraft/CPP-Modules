/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:07:40 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/29 14:42:27 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(): raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int number) {
	std::cout << "Int constructor call" << std::endl;
	raw = number << bits;
}

Fixed::Fixed(const float number) {
	std::cout << "Float constructor call" << std::endl;
	raw = roundf(number * (1 << bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const {
	return (float) raw / (1 << bits);
}

int Fixed::toInt() const {
	return raw >> bits;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return raw;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	raw = fixed.raw;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}
