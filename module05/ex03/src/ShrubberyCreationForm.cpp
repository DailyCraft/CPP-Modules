/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:47:16 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 10:54:29 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("shrubbery creation", 145, 137), target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("shrubbery creation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form): AForm(form), target(form.target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!isSigned())
		throw UnsignedFormException();
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();

	std::string file = target + "_shrubbery";
	std::ofstream os(file.c_str());
	if (!os)
		throw std::runtime_error("Failed to open " + file);
	os << "           ,@@@@@@@," << std::endl
		<< "   ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
		<< " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
		<< ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
		<< "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
		<< "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
		<< "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
		<< "    |o|        | |         | |" << std::endl
		<< "    |.|        | |         | |" << std::endl
		<< " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;

	os.flush();
	os.close();
}
