/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 08:41:45 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 10:07:15 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(): signGrade(150), executeGrade(150), signedForm(false) {}

Form::Form(const std::string &name, int signGrade, int executeGrade): name(name), signGrade(signGrade),
                                                                      executeGrade(executeGrade), signedForm(false) {
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &form): name(form.name), signGrade(form.signGrade), executeGrade(form.executeGrade) {
	*this = form;
}

Form::~Form() {}

Form &Form::operator=(const Form &form) {
	signedForm = form.signedForm;
	return *this;
}

std::string Form::getName() const {
	return name;
}

int Form::getSignGrade() const {
	return signGrade;
}

int Form::getExecuteGrade() const {
	return executeGrade;
}

bool Form::isSigned() const {
	return signedForm;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= signGrade)
		signedForm = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Form grade too high, maximum is 1";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Form grade too low, minimum is 150";
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	return os << "Form " << form.getName() << ": ["
	       << "sign grade: " << form.getSignGrade()
	       << ", execute grade: " << form.getExecuteGrade()
	       << ", is signed: " << form.isSigned()
	       << "]";
}
