/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:20:27 by rostik            #+#    #+#             */
/*   Updated: 2025/04/15 15:00:28 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

int main(){
      
    Data *data = new Data;

    data->_id = 137;
    data->_name = "Oleg";

    std::cout << "ID value: " << data->_id << std::endl;
    std::cout << "Name value: " << data->_name << std::endl;

    uintptr_t seri_ptr = Serializer::serialize(data);

    Data* deser_ptr = Serializer::deserialize(seri_ptr);
    
    std::cout << "Deserialized ID: " << deser_ptr->_id << std::endl;
    std::cout << "Deserialized Name: " << deser_ptr->_name << std::endl;

    return 0;
}