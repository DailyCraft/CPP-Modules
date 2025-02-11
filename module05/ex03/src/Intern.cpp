/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:53:01 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 11:23:27 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

template<class T>
static AForm *create(const std::string &target) {
	return new T(target);
}

AForm *Intern::makeForm(const std::string &name, const std::string &target) {
	std::string names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *(*forms[])(const std::string &) = {
		create<ShrubberyCreationForm>, create<RobotomyRequestForm>, create<PresidentialPardonForm>
	};

	for (int i = 0; i < 3; i++) {
		if (names[i] == name) {
			std::cout << "Intern creates " << name << std::endl;
			return forms[i](target);
		}
	}

	std::cout << "Intern didn't find a form with the name " << name << std::endl;
	return NULL;
}
