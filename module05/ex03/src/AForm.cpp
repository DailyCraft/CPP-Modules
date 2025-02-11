/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 08:41:45 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 10:08:45 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(): signGrade(150), executeGrade(150), signedForm(false) {}

AForm::AForm(const std::string &name, int signGrade, int executeGrade): name(name), signGrade(signGrade), executeGrade(executeGrade), signedForm(false) {
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &form): name(form.name), signGrade(form.signGrade), executeGrade(form.executeGrade) {
	*this = form;
}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &form) {
	signedForm = form.signedForm;
	return *this;
}

std::string AForm::getName() const {
	return name;
}

int AForm::getSignGrade() const {
	return signGrade;
}

int AForm::getExecuteGrade() const {
	return executeGrade;
}

bool AForm::isSigned() const {
	return signedForm;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= signGrade)
		signedForm = true;
	else
		throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "Form grade too high, maximum is 1";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Form grade too low, minimum is 150";
}

const char *AForm::UnsignedFormException::what() const throw() {
	return "Form is not signed";
}

std::ostream &operator<<(std::ostream &os, const AForm &form) {
	return os << "Form " << form.getName() << ": ["
	       << "sign grade: " << form.getSignGrade()
	       << ", execute grade: " << form.getExecuteGrade()
	       << ", is signed: " << form.isSigned()
	       << "]";
}
