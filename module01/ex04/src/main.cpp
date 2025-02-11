/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 09:28:54 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/31 08:19:34 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static void replace(std::ifstream &input, std::ofstream &output, char *toReplace, const char *replace) {
	std::string line;

	while (getline(input, line)) {
		while (true) {
			size_t index = line.find(toReplace);

			if (index != std::string::npos) {
				output << line.substr(0, index) << replace;
				line = line.substr(index + std::string(toReplace).length());
			} else {
				output << line << std::endl;
				break;
			}
		}
	}
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Incorrect arguments number! Required: 3, Current: " << argc - 1 << std::endl;
		std::cerr << argv[0] << " <filename> <to_replace> <replace>" << std::endl;
		return 1;
	}

	std::ifstream input(argv[1]);
	if (!input) {
		std::cerr << "Failed to open " << argv[1] << std::endl;
		return 1;
	}

	std::string outputFile = std::string(argv[1]) + ".replace";
	std::ofstream output(outputFile.c_str());
	if (!output) {
		std::cerr << "Failed to open " << argv[1] << ".replace" << std::endl;
		return 1;
	}

	replace(input, output, argv[2], argv[3]);
	return 0;
}