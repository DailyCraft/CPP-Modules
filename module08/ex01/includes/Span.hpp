/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:37:07 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 15:34:48 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

class Span {
	std::vector<int> content;
	unsigned int size;

public:
	Span();
	Span(unsigned int n);
	Span(const Span& span);
	~Span();

	Span& operator=(const Span& span);

	void addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;

	template<typename Iter>
	void addNumbers(Iter begin, Iter end) {
		if (static_cast<size_t>(std::distance(begin, end)) > size - content.size())
			throw std::range_error("Not enough space left");
		content.insert(content.end(), begin, end);
	}
};