/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 07:47:12 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/17 15:49:45 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <sys/time.h>
#include "PmergeMe.hpp"

std::list<int>::iterator operator+(const std::list<int>::iterator& iter, size_t s) {
	std::list<int>::iterator result = iter;
	for (size_t i = 0; i < s; i++)
		result++;
	return result;
}

std::list<int>::iterator operator-(const std::list<int>::iterator& iter, size_t s) {
	std::list<int>::iterator result = iter;
	for (size_t i = 0; i < s; i++)
		result--;
	return result;
}

static long getTime() {
	struct timeval time;

	gettimeofday(&time, NULL);
	return time.tv_sec * 1e6 + time.tv_usec;
}

int main(int argc, char *argv[]) {
	std::vector<int> vector(argc - 1);
	std::list<int> list;

	for (int i = 1; i < argc; i++) {
		char *end;
		int value = strtol(argv[i], &end, 10);
		if (*end != 0) {
			std::cout << argv[i] << " is not a number" << std::endl;
			return 1;
		}
		vector[i - 1] = value;
		list.push_back(value);
	}

	print(vector, "Before: ");
	time_t before = getTime();
	sort<>(vector);
	time_t after = getTime();
	print<>(vector, "After:  ");

	std::cout << "Time to process a range of " << vector.size() << " elements with std::vector<int> : "
		<< after - before << " us" << std::endl;
	
	before = getTime();
	sort<>(list);
	after = getTime();

	std::cout << "Time to process a range of " << list.size() << " elements with std::list<int> : "
		<< after - before << " us" << std::endl;
}