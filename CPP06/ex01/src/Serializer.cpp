/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:17:24 by rostik            #+#    #+#             */
/*   Updated: 2025/04/15 14:56:27 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

Serializer::Serializer(){
    std::cout << "Serializer constructor called!" << std::endl;
}

Serializer::Serializer(const Serializer &other){
    *this = other;
    std::cout << "Serializer copy constructor called!" <<std::endl;
}

Serializer &Serializer::operator=(const Serializer &other){
    std::cout << "Serializer assigment operator" << std::endl;
    if(this!= &other)
        *this = other;
    return (*this);

}

uintptr_t Serializer::serialize(Data* ptr) {
    uintptr_t serialize_ptr = reinterpret_cast<uintptr_t>(ptr);
    std::cout << "Serialize value : " << serialize_ptr<<std::endl;
    return serialize_ptr;
}

Data* Serializer::deserialize(uintptr_t raw) {
    Data *deser_ptr = reinterpret_cast<Data*>(raw);
    
    std::cout << "Deserialize address is : " << deser_ptr <<std::endl;
    return deser_ptr;
}