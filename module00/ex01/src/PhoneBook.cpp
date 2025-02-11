/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:54:32 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/29 13:25:53 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): last(0) {
	for (int i = 0; i < 8; i++)
		contacts[i] = Contact();	
}

int PhoneBook::getContactsAmount() const {
	return std::min(last, 8);
}

void PhoneBook::add() {
	Contact &contact = contacts[last++ % 8];
	std::string input;
	getline(input, "First name: ");
	contact.setFirstName(input);
	getline(input, "Last name: ");
	contact.setLastName(input);
	getline(input, "Nickname: ");
	contact.setNickname(input);
	getline(input, "Phone number: ");
	contact.setPhoneNumber(input);
	getline(input, "Darkest secret: ");
	contact.setDarkestSecret(input);
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
			<< std::setw(10) << "Index" << " | "
			<< std::setw(10) << "First Name" << " | "
			<< std::setw(10) << "Last Name" << " | "
			<< std::setw(10) << "Nickname" << std::endl;
	std::cout << "-----------|------------|------------|-----------" << std::endl;
	for (int i = 0; i < getContactsAmount(); i++) {
		const Contact &contact = contacts[i];
		std::cout << std::left
				<< std::setw(10) << i << " | "
				<< std::setw(10) << truncate(contact.getFirstName()) << " | "
				<< std::setw(10) << truncate(contact.getLastName()) << " | "
				<< std::setw(10) << truncate(contact.getNickname()) << std::endl;
	}

	return true;
}

void PhoneBook::displayContact(int index) const {
	const Contact &contact = contacts[index];
	std::cout << "First Name: " << contact.getFirstName() << std::endl
			<< "Last Name: " << contact.getLastName() << std::endl
			<< "Nickname: " << contact.getNickname() << std::endl
			<< "Phone number: " << contact.getPhoneNumber() << std::endl
			<< "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}