/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:02:28 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/31 11:45:02 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {
private:
	const Fixed x, y;

public:
	Point();
	Point(const Point &point);
	Point(float x, float y);
	~Point();

	Fixed getX() const;
	Fixed getY() const;

	Point &operator=(const Point &point);
};

bool bsp(const Point a, const Point b, const Point c, const Point point);