/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:35:22 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 09:37:30 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void test(int grade, void (Bureaucrat::*changeGrade)()) {
	try {
		Bureaucrat b("Foo", grade);
		std::cout << b << std::endl;

		(b.*changeGrade)();
		std::cout << b << std::endl;

		for (int i = 0; i < 148; i++)
			(b.*changeGrade)();
		std::cout << b << std::endl;

		(b.*changeGrade)();
	} catch (std::exception &e) {
		std::cout << "Exception thrown. Raison: " << e.what() << std::endl;
	}
}

int main() {
	test(150, &Bureaucrat::promote);
	std::cout << std::endl;
	test(1, &Bureaucrat::demote);
	std::cout << std::endl;

	try {
		Bureaucrat b("Bar", 0);
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "Grade too low" << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "Grade too high" << std::endl;
	}

	try {
		Bureaucrat b("Bar", 151);
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "Grade too low" << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "Grade too high" << std::endl;
	}
}
