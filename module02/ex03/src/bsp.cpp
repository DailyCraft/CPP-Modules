/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 08:57:21 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/31 15:49:11 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed compute(const Point &u, const Point &v, const Point &p) {
	float f1 = (v.getX().toFloat() - u.getX().toFloat()) * (p.getY().toFloat() - u.getY().toFloat());
	float f2 = (v.getY().toFloat() - u.getY().toFloat()) * (p.getX().toFloat() - u.getX().toFloat());
	return Fixed(f1 - f2);
}

bool bsp(const Point &a, const Point &b, const Point &c, const Point &point) {
	Fixed ab = compute(a, b, point);
	Fixed bc = compute(b, c, point);
	Fixed ca = compute(c, a, point);

	return (ab > 0 && bc > 0 && ca > 0) || (ab < 0 && bc < 0 && ca < 0);
}