/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:12:12 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/31 15:49:53 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main() {
	Point a(0, 0), b(0, 1), c(1, 0);
	std::cout << "Create triangle with coordinates (0;0) (0;1) (1;0)" << std::endl;

	Point pointIn(0.25, 0.25), pointVertex(0, 1), pointEdge(0.5, 0.5);
	std::cout << "Is point (0.25;0.25) inside: " << bsp(a, b, c, pointIn) << std::endl;
	std::cout << "Is point (0;1) inside: " << bsp(a, b, c, pointVertex) << std::endl;
	std::cout << "Is point (0.5;0.5) inside: " << bsp(a, b, c, pointEdge) << std::endl;
}