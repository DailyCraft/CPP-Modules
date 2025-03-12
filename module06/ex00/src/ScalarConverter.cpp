/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 07:45:22 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 08:59:46 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

static bool convertChar(const std::string& value) {
	if (value.length() != 3 || value[0] != '\'' || value[2] != '\'')
		return false;
	
	char c = value[1];
	std::cout << "char: '" << c << "'" << std::endl
		<< "int: " << static_cast<int>(c) << std::endl
		<< std::fixed << std::setprecision(1)
		<< "float: " << static_cast<float>(c) << 'f' << std::endl
		<< "double: " << static_cast<double>(c) << std::endl;
	return true;
}

static bool convertInt(const std::string& value) {
	char* end;
	int i = strtol(value.c_str(), &end, 10);
	if (*end != 0)
		return false;

	char c = static_cast<char>(i);
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl
		<< std::fixed << std::setprecision(1)
		<< "float: " << static_cast<float>(i) << 'f' << std::endl
		<< "double: " << static_cast<double>(i) << std::endl;
	return true;
}

static bool convertFloat(const std::string& value) {
	char* end;
	float f = strtof(value.c_str(), &end);
	if (std::string(end) != "f")
		return false;

	if (std::isnan(f) || std::isinf(f)) {
		std::cout << "char: impossible" << std::endl
			<< "int: impossible" << std::endl;
	} else {
		char c = static_cast<char>(f);
		if (isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	}
	
	std::cout << std::fixed << std::setprecision(1)
		<< "float: " << f << 'f' << std::endl
		<< "double: " << static_cast<double>(f) << std::endl;
	return true;
}

static bool convertDouble(const std::string& value) {
	char* end;
	double d = strtod(value.c_str(), &end);
	if (*end != 0)
		return false;

	if (std::isnan(d) || std::isinf(d)) {
		std::cout << "char: impossible" << std::endl
			<< "int: impossible" << std::endl;
	} else {
		char c = static_cast<char>(d);
		if (isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	}
	
	std::cout << std::fixed << std::setprecision(1)
		<< "float: " << static_cast<float>(d) << 'f' << std::endl
		<< "double: " << d << std::endl;
	return true;
}

void ScalarConverter::convert(const std::string& value) {
	if (value.length() == 0 ||
		(!convertChar(value) && !convertInt(value)
		&& !convertFloat(value) && !convertDouble(value)))
		std::cout << "Failed to parse \"" << value << "\"" << std::endl;
}
