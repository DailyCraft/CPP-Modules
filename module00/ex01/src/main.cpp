/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:57:09 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/29 13:30:48 by dvan-hum         ###   ########.fr       */
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

static void add(PhoneBook &book) {
	std::cout << std::endl;
	book.add();
	std::cout << std::endl;
}

static void search(PhoneBook &book) {
	std::cout << std::endl;
	if (!book.displayContacts())
		return;
	std::cout << std::endl;

	int index = -1;
	do {
		std::string input;
		getline(input, "Select index: ");
		std::stringstream ss(input);
		ss >> index;
		if (ss.fail() || index >= book.getContactsAmount()) {
			std::cout << "Invalid index!" << std::endl;
			index = -1;
		}
	} while (index == -1);

	book.displayContact(index);
	std::cout << std::endl;
}

int main() {
	PhoneBook book;

	std::string command;
	while (getline(command, "ADD | SEARCH | EXIT $> ")) {
		if (command == "ADD")
			add(book);
		else if (command == "SEARCH")
			search(book);
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "Unexpected command: " << command << std::endl;
	}
}