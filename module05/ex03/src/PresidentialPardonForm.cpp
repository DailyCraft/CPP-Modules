/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:47:16 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 10:53:59 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("presidential pardon", 25, 5), target("") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("presidential pardon", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form): AForm(form), target(form.target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!isSigned())
		throw UnsignedFormException();
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
