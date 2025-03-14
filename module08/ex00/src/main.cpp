/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:11:49 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 13:35:36 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <list>

int main() {
	std::cout << "--- In vector ---" << std::endl;
	std::vector<int> vector(10);
	for (int i = 0; i < 10; i++)
		vector[i] = i;
	std::vector<int>::iterator vecFind = easyfind(vector, 5);
	std::cout << "Found 5: " << (vecFind != vector.end() ? "true" : "false") << std::endl;
	vecFind = easyfind(vector, 10);
	std::cout << "Found 10: " << (vecFind != vector.end() ? "true" : "false") << std::endl;

	std::cout << std::endl << "--- In list ---" << std::endl;
	std::list<int> list;
	for (int i = 0; i < 10; i++)
		list.push_back(i);
	std::list<int>::iterator listFind = easyfind(list, 5);
	std::cout << "Found 5: " << (listFind != list.end() ? "true" : "false") << std::endl;
	listFind = easyfind(list, 10);
	std::cout << "Found 10: " << (listFind != list.end() ? "true" : "false") << std::endl;
}