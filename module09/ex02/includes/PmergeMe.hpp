/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 07:46:45 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/17 15:49:23 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>

std::list<int>::iterator operator+(const std::list<int>::iterator& iter, size_t s);
std::list<int>::iterator operator-(const std::list<int>::iterator& iter, size_t s);

template<typename T>
static void print(const T& vector, const std::string& prefix) {
	std::cout << prefix;
	for (typename T::const_iterator i = vector.begin(); i != vector.end(); i++)
		std::cout << " " << *i;
	std::cout << std::endl;
}

template<typename C>
void sort(C& vector) {
	typedef typename C::iterator I;

	static int level = 0;

	size_t pairSize = pow(2, level);
	if (pairSize * 2 > vector.size())
		return;

	I start = vector.begin();
	I end = vector.end() - vector.size() % (pairSize * 2);

	for (I it = start; it != end; ) {
		if (*(it + pairSize - 1) > *(it + pairSize * 2 - 1))
			for (size_t i = 0; i < pairSize; i++)
				std::swap(*(it + i), *(it + pairSize + i));
		if ((it = it + pairSize) != end)
			it = it + pairSize;
	}

	level++;
	sort<>(vector);
	level--;

	end = vector.end() - vector.size() % pairSize;

	C main, pend, left;
	main.insert(main.end(), start, start + pairSize);

	for (I it = start + pairSize; it != end; ) {
		main.insert(main.end(), it, it + pairSize);
		if ((it = it + pairSize) != end) {
			pend.insert(pend.end(), it, it + pairSize);
			it = it + pairSize;
		}
	}
	left.insert(left.end(), end, vector.end());

	for (size_t i = pend.size() / pairSize; i > 0; i--) {
		I it = main.begin() + pairSize;
		while (it != main.end() && *(it - 1) < *(pend.begin() + i * pairSize - 1))
			it = it + pairSize;
		if (*(it - 1) >= *(pend.begin() + i * pairSize - 1))
			it = it - pairSize;
		main.insert(it, pend.begin() + (i - 1) * pairSize, pend.begin() + i * pairSize);
	}

	main.insert(main.end(), left.begin(), left.end());
	vector = main;
}