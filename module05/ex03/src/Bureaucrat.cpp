/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:13:50 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 10:38:40 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	grade = bureaucrat.grade;
	return *this;
}

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::promote() {
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::demote() {
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
}

void Bureaucrat::signForm(AForm &form) const {
	try {
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	} catch (AForm::GradeTooLowException &e) {
		std::cout << name << " couldn't sign " << form.getName() << " because his grade is too low." << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm &form) const {
	try {
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	} catch (AForm::GradeTooLowException &e) {
		std::cout << name << " couldn't execute " << form.getName() << " because his grade is too low." << std::endl;
	} catch (AForm::UnsignedFormException &e) {
		std::cout << "The form " << form.getName() << " must be signed to be executed." << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade too high, maximum is 1";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat grade too low, minimum is 150";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return os;
}
