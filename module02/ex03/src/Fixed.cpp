/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:07:40 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/29 16:00:40 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(): raw(0) {}

Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

Fixed::Fixed(const int number) {
	raw = number << bits;
}

Fixed::Fixed(const float number) {
	raw = roundf(number * (1 << bits));
}

Fixed::~Fixed() {}

float Fixed::toFloat() const {
	return static_cast<float>(raw) / (1 << bits);
}

int Fixed::toInt() const {
	return raw >> bits;
}

int Fixed::getRawBits() const {
	return raw;
}

void Fixed::setRawBits(const int raw) {
	this->raw = raw;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	return f1 < f2 ? f1 : f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) {
	return f1 < f2 ? f1 : f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	return f1 > f2 ? f1 : f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) {
	return f1 > f2 ? f1 : f2;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	raw = fixed.raw;
	return *this;
}

Fixed &Fixed::operator++() {
	raw++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed copy(*this);
	++*this;
	return copy;
}

Fixed &Fixed::operator--() {
	raw--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed copy(*this);
	--*this;
	return copy;
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	Fixed result;
	result.raw = raw + fixed.raw;
	return fixed;
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	Fixed result;
	result.raw = raw - fixed.raw;
	return fixed;
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	return Fixed(toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	if (fixed.raw == 0)
		throw std::logic_error("Division by zero");
	return Fixed(toFloat() / fixed.toFloat());

}

bool Fixed::operator==(const Fixed &fixed) const {
	return raw == fixed.raw;
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return raw != fixed.raw;
}

bool Fixed::operator>(const Fixed &fixed) const {
	return raw > fixed.raw;
}

bool Fixed::operator<(const Fixed &fixed) const {
	return raw < fixed.raw;
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return raw >= fixed.raw;
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return raw <= fixed.raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}