/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:35:22 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 11:30:49 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat foo("Foo", 50);
	Bureaucrat president("President", 1);
	std::cout << foo << std::endl << president << std::endl << std::endl;

	ShrubberyCreationForm shrubbery("home");
	RobotomyRequestForm robotomy("Bar");
	PresidentialPardonForm presidential("Zaphod Beeblebrox II");
	std::cout << shrubbery << std::endl << robotomy << std::endl << presidential << std::endl << std::endl;

	foo.signForm(shrubbery);
	foo.signForm(robotomy);
	foo.signForm(presidential);
	std::cout << std::endl;

	foo.executeForm(shrubbery);
	foo.executeForm(robotomy);
	foo.executeForm(presidential);
	std::cout << std::endl;

	president.signForm(presidential);
	std::cout << std::endl;
	president.executeForm(robotomy);
	president.executeForm(presidential);
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		robotomy.execute(president);
}
