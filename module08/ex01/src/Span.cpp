/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:37:20 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 15:57:27 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): content(), size(0) {}

Span::Span(unsigned int n): content(), size(n) {}

Span::Span(const Span &span): content(span.content), size(span.size) {}

Span::~Span() {}

Span &Span::operator=(const Span &span) {
	content = span.content;
	size = span.size;
	return *this;
}

void Span::addNumber(int number) {
	if (content.size() >= size)
		throw std::range_error("No more numbers can be added");
	content.push_back(number);
}

int Span::shortestSpan() const {
	if (content.size() < 2)
		throw std::logic_error("Not enough numbers to get the shortness span.");

	std::vector<int> temp = content;
	std::sort(temp.begin(), temp.end());
	std::adjacent_difference(temp.begin(), temp.end(), temp.begin());
	return *std::min_element(temp.begin() + 1, temp.end());
}

int Span::longestSpan() const {
	if (content.size() < 2)
		throw std::logic_error("Not enough numbers to get the longest span.");

	return *std::max_element(content.begin(), content.end()) - *std::min_element(content.begin(), content.end());
}
