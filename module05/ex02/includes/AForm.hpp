/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 08:30:11 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 10:49:12 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class AForm {
	const std::string name;
	const int signGrade;
	const int executeGrade;
	bool signedForm;

public:
	AForm();
	AForm(const std::string &name, int signGrade, int executeGrade);
	AForm(const AForm &form);
	virtual ~AForm();

	AForm &operator=(const AForm &form);

	std::string getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool isSigned() const;

	void beSigned(const Bureaucrat &bureaucrat);
	virtual void execute(const Bureaucrat &executor) const = 0;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};

	class UnsignedFormException : public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const AForm &form);
