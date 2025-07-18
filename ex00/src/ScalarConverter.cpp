/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:25:54 by jlara-na          #+#    #+#             */
/*   Updated: 2025/07/18 21:59:12 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

bool	is_char(const std::string &str){
	return (str.length() == 1 && !std::isdigit(str[0]));
}

bool	is_int(const std::string &str){
	int number;
	std::istringstream stream(str);
	stream >> std::noskipws >> number;
	return (stream.eof() && !stream.fail());
}

bool	is_float(const std::string &str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return true;
	if (str[str.size() - 1] != 'f')
		return false;
	float number;
	std::istringstream stream(str.substr(0, str.size() - 1));
	stream >> std::noskipws >> number;
	return (stream.eof() && !stream.fail());	
}

bool	is_double(const std::string &str){
	if (str == "-inf" || str == "+inf" || str == "nan")
		return true;
	double number;
	std::istringstream stream(str);
	stream >> std::noskipws >> number;
	return (stream.eof() && !stream.fail());
}

void	print_char(const std::string &str){
	std::cout << "Char   : " << str << std::endl;
	std::cout << "Int    : " << static_cast<double>(str[0]) << std::endl;
	std::cout << "Float  : " << static_cast<double>(str[0]) << ".0f" << std::endl;
	std::cout << "Double : " << static_cast<double>(str[0]) << ".0" << std::endl;
}

void	print_int(const std::string &str){
	double	d = static_cast<double>(strtod(str.c_str(), NULL));
	int	i = static_cast<int>(d);
	float	f = static_cast<float>(d);
	
	std::cout.precision(10);
	if (i > 32 && i < 127 && isprint(i))
		std::cout << "Char   : '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Char   : Not poissible" << std::endl;
	std::cout << "Int    : " << i << std::endl;
	if (f - floorf(f) == 0)
		std::cout << "Float  : " 	<< f << ".0f" << std::endl;
	else
		std::cout << "Float  : " 	<< f << "f" << std::endl;
	if (d - floor(d) == 0)
		std::cout << "Double : " 	<< d << ".0" << std::endl;
	else
		std::cout << "Double : " 	<< d << std::endl;
}

void	print_float(const std::string &str){
	float	f = static_cast<float>(strtod(str.c_str(), NULL));
	double	d = static_cast<double>(f);
	int	i = static_cast<int>(f);
	
	if (i > 32 && i < 127 && isprint(i) && !(str == "-inff" || str == "+inff" || str == "nanf"))
		std::cout << "Char   : '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Char   : Not poissible" << std::endl;
	std::cout.precision(10);
	if (!(str == "-inff" || str == "+inff" || str == "nanf"))
		std::cout << "Int    : " << i << std::endl;
	else
		std::cout << "Int    : Not poissible" << std::endl;
	if (str == "-inf" || str == "+inf" || str == "nan"){
		std::cout << "Float  : " 	<< str << std::endl;
		std::cout << "Double : " 	<< str.substr(0, str.size() - 1) << std::endl;
	}
	else{
		if (f - floorf(f) == 0 && f < 1000000000)
			std::cout << "Float  : " 	<< f << ".0f" << std::endl;
		else
			std::cout << "Float  : " 	<< f << "f" << std::endl;
		if (d - floor(d) == 0 && f < 1000000000)
			std::cout << "Double : " 	<< d << ".0" << std::endl;
		else
			std::cout << "Double : " 	<< d << std::endl;
	}
}

void	print_double(const std::string &str){
	double	d = static_cast<double>(strtod(str.c_str(), NULL));
	int	i = static_cast<int>(d);
	float	f = static_cast<float>(d);

	std::cout.precision(10);
	if (i > 32 && i < 127 && isprint(i) && !(str == "-inf" || str == "+inf" || str == "nan"))
		std::cout << "Char   : '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Char   : Not poissible" << std::endl;
	if (!(str == "-inf" || str == "+inf" || str == "nan") && d < 2147483648 && d > -2147483648)
		std::cout << "Int    : " << i << std::endl;
	else
		std::cout << "Int    : Not poissible" << std::endl;
	if (str == "-inf" || str == "+inf" || str == "nan"){
		std::cout << "Float  : " 	<< str << "f" << std::endl;
		std::cout << "Double : " 	<< str << std::endl;
	}
	else{
		if (f - floorf(f) == 0 && f < 1000000000)
			std::cout << "Float  : " 	<< f << ".0f" << std::endl;
		else
			std::cout << "Float  : " 	<< f << "f" << std::endl;
		if (d - floor(d) == 0 && f < 1000000000)
			std::cout << "Double : " 	<< d << ".0" << std::endl;
		else
			std::cout << "Double : " 	<< d << std::endl;
	}
}

void ScalarConverter::convert(const std::string &input){
	if (is_char(input))
		print_char(input);
	else if (is_int(input))
		print_int(input);
	else if (is_float(input))
		print_float(input);
	else if (is_double(input))
		print_double(input);
	else
		std::cout << "Something else" << std::endl;
}
