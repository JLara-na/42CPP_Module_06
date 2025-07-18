/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:48:15 by jlara-na          #+#    #+#             */
/*   Updated: 2025/07/18 18:25:51 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"
#include "../inc/Data.hpp"

int main(){
    
    Data    *data = new Data;
    Data    *data_deserialized = NULL;
    uintptr_t middle_value;
    
    middle_value = Serializer::serialize(data);
    data_deserialized = Serializer::deserialize(middle_value);
    
    std::cout << "data address              : " << data << std::endl;
    std::cout << "middle value              : " << middle_value << std::endl;
    std::cout << "data_deserialized address : " << data_deserialized << std::endl;

    delete data;
    return (0);
}