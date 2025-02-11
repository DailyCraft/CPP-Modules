/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 08:35:48 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/02/03 09:00:55 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain {
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain &brain);
	~Brain();

	std::string &getIdea(int index);

	Brain &operator=(const Brain &brain);
};
