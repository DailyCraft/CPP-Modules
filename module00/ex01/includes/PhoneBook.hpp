/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:54:37 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/29 13:24:00 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

std::istream &getline(std::string &str, std::string prompt);

class PhoneBook {
private:
	Contact contacts[8];
	unsigned int last;

public:
	PhoneBook();

	int getContactsAmount() const;
	void add();
	bool displayContacts() const;
	void displayContact(int index) const;
};