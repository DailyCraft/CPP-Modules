/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:15:31 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/17 07:42:36 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static int apply(const std::string& op, std::stack<int>& stack) {
	if (stack.size() < 2)
		throw std::logic_error("Incorrect RPN expression");
	
	int second = stack.top();
	stack.pop();
	int first = stack.top();
	stack.pop();

	if (op == "+")
		return first + second;
	if (op == "-")
		return first - second;
	if (op == "*")
		return first * second;
	if (op == "/")
		return first / second;
	return 0;
}

static void each(const std::string& value, std::stack<int>& stack) {
	if (value == "+" || value == "-" || value == "*" || value == "/")
		stack.push(apply(value, stack));
	else {
		char *end;
		stack.push(strtol(value.c_str(), &end, 10));
		if (*end != 0)
			throw std::logic_error("Neither a number nor an operator");
	}
}

int rpn(const std::string& expression) {
	std::stack<int> stack;
	size_t current, prev = 0;

	while ((current = expression.find(' ', prev)) < expression.length()) {
		if (current > prev)
			each(expression.substr(prev, current - prev), stack);
		prev = current + 1;
	}

	if (prev < expression.length())
		each(expression.substr(prev), stack);
	if (stack.empty())
		throw std::logic_error("Blank input");
	if (stack.size() > 1)
		throw std::logic_error("Missing an operator");
	return stack.top();
}