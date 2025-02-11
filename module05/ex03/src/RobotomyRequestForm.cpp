/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:47:16 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 10:54:15 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("robotomy request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("robotomy request", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form): AForm(form), target(form.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	static bool randomSeedSet = false;

	if (!isSigned())
		throw UnsignedFormException();
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();

	if (!randomSeedSet) {
		srand(time(0));
		randomSeedSet = true;
	}
	if (rand() % 2 == 0)
		std::cout << target << " has been robotomized" << std::endl;
	else
		std::cout << "The robotomizing of " << target << " failed" << std::endl;
}
