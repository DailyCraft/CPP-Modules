/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:03:29 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/29 13:43:37 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {
private:
	int raw;
	static const int bits = 8;
	
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();

	int getRawBits() const;
	void setRawBits(const int raw);

	Fixed &operator=(const Fixed &fixed);
};