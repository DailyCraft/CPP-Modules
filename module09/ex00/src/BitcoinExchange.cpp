/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 08:23:57 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/17 15:48:20 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(): data() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& exchange) {
	*this = exchange;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& exchange) {
	data = exchange.data;
	return *this;
}

void BitcoinExchange::parseData(const std::string& path) {
	std::ifstream is(path.c_str());
	if (!is) {
		throw std::runtime_error("Failed to open the file");
	}
	std::string line;
	getline(is, line); // Skip first line
	while (getline(is, line)) {
		size_t find = line.find(',');
		if (find >= line.size())
			throw std::runtime_error("Badly formatted line");
		char *end;
		std::string date = line.substr(0, find);
		if (!checkDateFormat(date))
			throw std::runtime_error("Badly formatted date");
		data[date] = strtof(line.c_str() + find + 1, &end);
		if (*end != 0)
			throw std::runtime_error("Badly formatted line");
	}	
}

float BitcoinExchange::getExchange(const std::string& date) {
	std::map<std::string, float>::iterator value = data.upper_bound(date);
	if (value == data.begin())
		throw std::runtime_error("Failed to find the exchange rate.");
	return (--value)->second;
}

bool checkDateFormat(const std::string &date) {
	char *end;
	int value = strtol(date.c_str(), &end, 10);
	if (*end != '-')
		return false;
	value = strtol(end + 1, &end, 10);
	if (*end != '-' || value < 1 || value > 12)
		return false;
	value = strtol(end + 1, &end, 10);
	if (*end != 0 || value < 1 || value > 31)
		return false;
	return true;
}
