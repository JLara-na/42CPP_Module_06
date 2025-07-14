/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:24:13 by jlara-na          #+#    #+#             */
/*   Updated: 2025/07/14 19:26:31 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>

class ScalarConverter {
	public:
	    void convert(const std::string& literal);
	private:
	    ScalarConverter();
	    ScalarConverter(const ScalarConverter&);
	    ScalarConverter& operator=(const ScalarConverter&);
	    ~ScalarConverter();
};

