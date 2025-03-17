/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 08:06:34 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/17 14:04:13 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <map>
#include <algorithm>
#include <fstream>
#include <cstdlib>

bool checkDateFormat(const std::string& date);

class BitcoinExchange {
	std::map<std::string, float> data;

public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& exchange);
	~BitcoinExchange();

	BitcoinExchange& operator=(const BitcoinExchange& exchange);

	void parseData(const std::string& path);
	float getExchange(const std::string& date);
};