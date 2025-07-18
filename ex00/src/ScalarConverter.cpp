/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:25:54 by jlara-na          #+#    #+#             */
/*   Updated: 2025/07/18 20:45:06 by jlara-na         ###   ########.fr       */
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
	
	if (i > 32 && i < 127 && isprint(i))
		std::cout << "Char   : '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Char   : Not poissible" << std::endl;
	std::cout << "Int    : " << i << std::endl;
	std::cout << "Float  : " << f << ".0f" << std::endl;
	std::cout << "Double : " << d << ".0" << std::endl;
}
// void	print_float(const std::string &str){
// 	if (){
// 		std::cout << "Char   : Not poissible" << std::endl;
// 		std::cout << "Int    : Not poissible" << std::endl;
// 	}
// 	std::cout << "Char   :" << std::endl;
// 	std::cout << "Int    :" << std::endl;
// 	std::cout << "Float  :" << str << std::endl;
// 	std::cout << "Double :" << std::endl;
// }


void ScalarConverter::convert(const std::string &input){
	if (is_char(input))
		print_char(input);
	else if (is_int(input))
		print_int(input);
	else if (is_float(input))
		std::cout << "FLOAT" << std::endl;
	else if (is_double(input))
		std::cout << "DOUBLE" << std::endl;
	else
		std::cout << "Something else" << std::endl;
}
