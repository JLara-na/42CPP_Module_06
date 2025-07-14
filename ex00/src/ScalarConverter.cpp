/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:25:54 by jlara-na          #+#    #+#             */
/*   Updated: 2025/07/14 19:26:43 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &other){
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
	if (this != &other)
		;
	return (*this);
}

void ScalarConverter::convert(const std::string &input){
	
}
