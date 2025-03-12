/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:12:34 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/03/12 12:41:38 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array {
	unsigned int _size;
	T* _array;

public:
	Array(): _size(0), _array(NULL) {};
	Array(unsigned int size): _size(size), _array(new T[size]) {};
	
	Array(const Array& array) {
		_size = 0;
		*this = array;
	}

	~Array() {
		if (_size > 0)
			delete[] _array;
	}

	Array& operator=(const Array& array) {
		if (_size > 0)
			delete[] _array;
		_size = array.size();
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = array._array[i];		
		return *this;
	}
	
	T& operator[](unsigned int index) const {
		if (index >= _size)
			throw std::range_error("index out of bounds");
		return _array[index];
	}
	
	unsigned int size() const {
		return _size;
	}
};
