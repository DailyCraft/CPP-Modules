/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:02:21 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/29 16:02:22 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(const Point &point): x(point.x), y(point.y) {}

Point::Point(float x, float y): x(x), y(y) {}

Point::~Point() {}

Point &Point::operator=(const Point &point __attribute__((unused))) {
	return *this;
}

Fixed Point::getX() const {
	return x;
}

Fixed Point::getY() const {
	return y;
}