/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:06:50 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 12:43:50 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
	Array<std::string> array(10);
	array[0] = "Zero";
	array[1] = "One";
	array[2] = "Two";
	array[3] = "Three";
	array[4] = "Four";
	array[5] = "Five";
	array[6] = "Six";
	array[7] = "Seven";
	array[8] = "Eigth";
	array[9] = "Nine";

	try {
		array[10] = "Ten";
	} catch (std::exception& e) {
		std::cout << "Exception thrown. Reason: " << e.what() << std::endl;
	}

	Array<std::string> copy = array;
	
	for (int i = 0; i < 10; i++)
		std::cout << copy[i] << std::endl;

	copy[4] = "Copy modified";
	std::cout << array[4] << " | " << copy[4] << std::endl;

	Array<int> ints(5);
	ints[0] = 4;

	Array<int> empty;
}
