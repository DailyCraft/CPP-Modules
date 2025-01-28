/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:51:46 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/28 08:56:37 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	
	std::cout << "Variable address: " << &brain << std::endl
		<< "Address hold by ptr: " << stringPTR << std::endl
		<< "Address hold by ref: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Variable value: " << brain << std::endl
		<< "Value pointed by ptr: " << *stringPTR << std::endl
		<< "Value pointed by ref: " << stringREF << std::endl;
}