/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:17:24 by rostik            #+#    #+#             */
/*   Updated: 2025/04/16 11:27:45 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

template <typename T>
void prints(const T& element){
    std::cout << element << std::endl;
}

int main(){
    int intArray[] = {1,2,3,4,5};
    std::string strArray[] = {"42", "Wolsburg", "Berlin", "Hellbron"};

    std::cout << "Integers:" << std::endl;
    std::cout << "---------" << std::endl;
    ::iter(intArray, 5, prints<int>);

    std::cout << "\nStrings:" << std::endl;
    std::cout << "---------" << std::endl;
    ::iter(strArray, 4, prints<std::string>);

    return 0;
}