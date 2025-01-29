/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:57:09 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/28 10:29:42 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include "PhoneBook.hpp"

std::istream &getline(std::string &str, std::string prompt) {
	do {
		std::cout << prompt;
		std::getline(std::cin, str);
	} while (!std::cin.eof() && str.empty());
	if (!std::cin)
		exit(0);
	return std::cin;
}

static void search(PhoneBook &book) {
	
	if (!book.displayContacts())
		return;

	int index = -1;
	do {
		std::string input;
		getline(input, "Select index: ");
		std::stringstream ss(input);
		ss >> index;
		if (ss.fail() || (unsigned) index >= std::min(book.last, 8u)) {
			std::cout << "Invalid index!" << std::endl;
			index = -1;
		}
	} while (index == -1);

	book.displayContact(index);
}

int main() {
	PhoneBook book;

	std::string command;
	while (getline(command, "ADD | SEARCH | EXIT $> ")) {
		if (command == "ADD")
			book.add();
		else if (command == "SEARCH")
			search(book);
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "Unexpected command: " << command << std::endl;
	}
}