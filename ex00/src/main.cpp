/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:23:17 by jlara-na          #+#    #+#             */
/*   Updated: 2025/07/23 15:55:15 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int main(void)
{
    std::cout << "--------convert(\"A\")--------" << std::endl;
    ScalarConverter::convert("A");
    std::cout << "--------convert(\"42\")-------" << std::endl;
    ScalarConverter::convert("42");
    std::cout << "------convert(\"42.0f\")-----" << std::endl;
    ScalarConverter::convert("42.0f");
    std::cout << "------convert(\"42.4\")-----" << std::endl;
    ScalarConverter::convert("42.4");
    std::cout << "------convert(\"nanf\")-----" << std::endl;
    ScalarConverter::convert("nanf");
    std::cout << "------convert(\"nan\")-----" << std::endl;
    ScalarConverter::convert("nan");
}
