/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:59:25 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/14 07:51:09 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	typedef	typename std::stack<T>::container_type::iterator iterator;

	iterator begin() {
		return this->c.begin();
	}

	iterator end() {
		return this->c.end();
	}
};