/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 07:57:06 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 08:56:51 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2)
		std::cout << "./convert <value>" << std::endl;
	else
		ScalarConverter::convert(argv[1]);
}