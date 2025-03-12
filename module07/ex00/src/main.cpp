/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:06:50 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 13:04:16 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "templates.hpp"

template<typename T>
void check(T a, T b) {
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "Swapped: a = " << a << ", b = " << b << std::endl
		<< "min(a, b) = " << min(a, b) << std::endl
		<< "max(a, b) = " << max(a, b) << std::endl
		<< std::endl;
}

int main() {
	check(2, 3);
	check("string1", "string2");
	return 0;
}
