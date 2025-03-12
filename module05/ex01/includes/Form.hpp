/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 08:30:11 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 10:48:58 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class Form {
private:
	const std::string name;
	const int signGrade;
	const int executeGrade;
	bool signedForm;

public:
	Form();
	Form(const std::string &name, int signGrade, int executeGrade);
	Form(const Form &form);
	~Form();

	Form &operator=(const Form &form);

	std::string getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool isSigned() const;

	void beSigned(const Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);
