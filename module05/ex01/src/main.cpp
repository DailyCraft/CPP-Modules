/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:35:22 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/07 09:39:13 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat foo("Foo", 50);
	std::cout << foo << std::endl;

	std::cout << std::endl;

	Form publicForm("Public Form", 140, 100);
	std::cout << publicForm << std::endl;
	foo.signForm(publicForm);
	std::cout << publicForm << std::endl;

	std::cout << std::endl;

	Form confidentialForm("Confidential Form", 10, 1);
	std::cout << confidentialForm << std::endl;
	foo.signForm(confidentialForm);
	std::cout << confidentialForm << std::endl;
}
