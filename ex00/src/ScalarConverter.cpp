/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:25:54 by jlara-na          #+#    #+#             */
/*   Updated: 2025/06/03 19:20:47 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
	std::cout << "ScalarConverter standard constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other){
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = other;
}

ScalarConverter::~ScalarConverter(){
	std::cout << "ScalarConverter standard destructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
	if (this != &other)
		;
	return (*this);
}

void ScalarConverter::convert(std::string input){
	
}
