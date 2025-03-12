/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:05:46 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 10:48:49 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Bureaucrat {
private:
	const std::string name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &bureaucrat);

	std::string getName() const;
	int getGrade() const;

	void promote();
	void demote();

	void signForm(Form &form) const;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
