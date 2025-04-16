/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:30:16 by rostik            #+#    #+#             */
/*   Updated: 2025/04/16 13:08:04 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

int main(){
    std::cout << "--- Default constructor ---" << std::endl;
    Array<int> emptyArray;
    std::cout << "Size: " << emptyArray.size() << std::endl;

    std::cout << "\n--- Constructor with size ---" << std::endl;
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i)
        intArray[i] = i * 10;
    
    for (unsigned int i = 0; i < intArray.size(); ++i)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;

    std::cout << "\n--- Copy constructor ---" << std::endl;
    Array<int> copyArray(intArray);
    copyArray[0] = 999;  // Проверяем, что копия независимая
    std::cout << "Original[0]: " << intArray[0] << ", Copy[0]: " << copyArray[0] << std::endl;

    std::cout << "\n--- Assignment operator ---" << std::endl;
    Array<int> assignArray;
    assignArray = intArray;
    assignArray[1] = 888;
    std::cout << "Original[1]: " << intArray[1] << ", Assigned[1]: " << assignArray[1] << std::endl;

    std::cout << "\n--- Const object test ---" << std::endl;
    const Array<int> constArray(intArray);
    std::cout << "ConstArray[2]: " << constArray[2] << std::endl;
    // constArray[2] = 42; // ❌ Закомментировано: не скомпилируется (и это правильно!)

    std::cout << "\n--- Exception test ---" << std::endl;
    try {
        std::cout << intArray[100] << std::endl; // Выход за границы
    } catch (std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "\n--- Test with std::string ---" << std::endl;
    Array<std::string> stringArray(3);
    stringArray[0] = "Hello";
    stringArray[1] = "Template";
    stringArray[2] = "World";

    for (unsigned int i = 0; i < stringArray.size(); ++i)
        std::cout << stringArray[i] << " ";
    std::cout << std::endl;

    return 0;
}