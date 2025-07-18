/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:23:17 by jlara-na          #+#    #+#             */
/*   Updated: 2025/07/18 21:58:49 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int main(void)
{
    ScalarConverter::convert("A");
    std::cout << "----------------------------" << std::endl;
    ScalarConverter::convert("0");
    std::cout << "----------------------------" << std::endl;
    ScalarConverter::convert("42.0f");
    std::cout << "----------------------------" << std::endl;
    ScalarConverter::convert("1234567890");
}
