/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:35:22 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 11:22:24 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	Bureaucrat president("President", 1);
	Intern intern;

	AForm *form = intern.makeForm("shrubbery creation", "home");
	president.signForm(*form);
	president.executeForm(*form);
	delete form;
	std::cout << std::endl;

	form = intern.makeForm("robotomy request", "Foo");
	president.signForm(*form);
	president.executeForm(*form);
	delete form;
	std::cout << std::endl;

	form = intern.makeForm("presidential pardon", "Bar");
	president.signForm(*form);
	president.executeForm(*form);
	delete form;
	std::cout << std::endl;

	intern.makeForm("unknown", "...");
}
