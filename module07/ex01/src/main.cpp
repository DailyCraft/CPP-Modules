/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:06:50 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/10 14:29:34 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

static void each(int& i) {
	std::cout << i << std::endl;
}

int main() {
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	iter(array, 10, each);
}
