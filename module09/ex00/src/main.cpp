/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 08:05:58 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/17 15:41:25 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
	BitcoinExchange exchange;
	try {
		exchange.parseData("data.csv");
	} catch (std::exception& e) {
		std::cout << "Failed to parse exchange rates. Reason: " << e.what() << std::endl;
		return 1;
	}

	if (argc != 2) {
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}

	std::ifstream is(argv[1]);
	if (!is) {
		std::cout << "Error: Failed to open " << argv[1] << std::endl;
		return 1;
	}
	std::string line;
	getline(is, line); // Skip first line
	while (getline(is, line)) {
		size_t pipe = line.find('|');
		if (pipe >= line.length())
			std::cout << "Error: bad input => " << line << std::endl;
		else {
			std::string date = line.substr(0, pipe - 1);
			char *end;
			float value = strtof(line.c_str() + pipe + 2, &end);
			if (*end != 0 || !checkDateFormat(date))
				std::cout << "Error: bad input => " << line << std::endl;
			else if (value < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else if (value > 1000)
				std::cout << "Error: too large a number." << std::endl;
			else {
				try {
					float rate = exchange.getExchange(date);
					std::cout << date << " => " << value << " = " << rate * value << std::endl;
				} catch (std::exception& e) {
					std::cout << "Error: failed to get the exchange rate." << std::endl; 
				}
			}
		}
	}
}