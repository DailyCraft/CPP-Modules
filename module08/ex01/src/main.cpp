/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:36:50 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 15:57:47 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main() {
	Span sp(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try {
		sp.addNumber(0);
	} catch (std::exception &e) {
		std::cout << "Exception thrown. Reason: " << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span empty;
	try {
		std::cout << empty.shortestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << "Exception thrown. Reason: " << e.what() << std::endl;
	}

	Span big(20000);
	big.addNumber(1);
	int array[19999];
	for (int i = 0; i < 19999; i++)
		array[i] = 2 * i;
	std::cout << std::endl;
	big.addNumbers(array, array + 19999);
	std::cout << big.shortestSpan() << std::endl;
	std::cout << big.longestSpan() << std::endl;
}