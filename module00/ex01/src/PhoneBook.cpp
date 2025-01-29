/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:54:32 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/29 11:39:38 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): last(0) {
	for (int i = 0; i < 8; i++)
		contacts[i] = Contact();	
}

void PhoneBook::add() {
	Contact &contact = contacts[(last++) % 8];
	getline(contact.firstName, "First name: ");
	getline(contact.lastName, "Last name: ");
	getline(contact.nickname, "Nickname: ");
	getline(contact.phoneNumber, "Phone number: ");
	getline(contact.darkestSecret, "Darkest secret: ");
}

static std::string truncate(const std::string &str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

bool PhoneBook::displayContacts() const {
	if (last == 0) {
		std::cout << "No contact saved!" << std::endl;
		return false;
	}

	std::cout << std::left
		<< std::setw(10)  << "Index" << " | "
		<< std::setw(10)  << "First Name" << " | "
		<< std::setw(10)  << "Last Name" << " | "
		<< std::setw(10)  << "Nickname" << std::endl;
	std::cout << "-----------|------------|------------|-----------" << std::endl;
	for (unsigned int i = 0; i < std::min(last, 8u); i++) {
		const Contact &contact = contacts[i];
		std::cout << std::left
			<< std::setw(10)  << i << " | "
			<< std::setw(10)  << truncate(contact.firstName) << " | "
			<< std::setw(10)  << truncate(contact.lastName) << " | "
			<< std::setw(10)  << truncate(contact.nickname) << std::endl;
	}

	return true;
}

void PhoneBook::displayContact(int index) const {
	const Contact &contact = contacts[index];
	std::cout << "First Name: " << contact.firstName << std::endl
		<< "Last Name: " << contact.lastName << std::endl
		<< "Nickname: " << contact.nickname << std::endl
		<< "Phone number: " << contact.phoneNumber << std::endl
		<< "Darkest secret: " << contact.darkestSecret << std::endl;
}