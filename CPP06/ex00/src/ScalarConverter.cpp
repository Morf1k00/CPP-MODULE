/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:24:03 by rostik            #+#    #+#             */
/*   Updated: 2025/04/15 14:03:58 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    std::cout << "ScalarConvert default constructor called!"<< std::endl;
}

ScalarConverter::ScalarConverter (ScalarConverter &other){
    *this = other;
    std::cout << "Copy constructor called!" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &other){
    std::cout<< "Assigment operator called" << std::endl;
    (void)other;
    return(*this);
}

void charIs(std::string iter){
    char c = iter[0];
    int i = static_cast<int> (c);
    float   f = static_cast<float>(c);
    double  d = static_cast<double>(c);

    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d <<".0" << std::endl;
    return;
}


bool isInt(std::string iter){
    size_t s = 0;
    if (iter[0] == '-' || iter[0] == '+')
        s++;
    for (size_t i = s; i < iter.length(); i++){
        if(!isdigit(iter[i])){
            return false;
        }
    }
    return true;
}

void intIs(std::string iter){
    std::istringstream iss(iter);
    int i;
    iss >> i;
    
    char c = static_cast<char>(i);
    float f = static_cast<float>(i);
    double d = static_cast<double>(i);

    if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: '" << "Non printable" << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d << ".0"<< std::endl;
    return;
}

void floatIs(std::string iter){
    std::istringstream iss(iter);
    float f;
    iss >> f;
    
    char c = static_cast<char>(f);
    int i = static_cast<int> (f);
    double d = static_cast<double>(f);

    if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: '" << "Non printable" << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d <<".0" << std::endl;
    return;
}

void doubleIs(std::string iter){
    std::istringstream iss(iter);
    double d;
    iss >> d;
    
    char c = static_cast<char>(d);
    int i = static_cast<int> (d);
    float f = static_cast<float>(d);
    if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: '" << "Non printable" << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d <<".0" << std::endl;
    return;
}

bool isFloat(std::string iter){
    size_t s = 0;
    if (iter[0] == '-' || iter[0] == '+')
        s++;

    bool dotSeen = false;
    bool digitSeen = false;

    while (s < iter.length()) {
        if (isdigit(iter[s])) {
            digitSeen = true;
        } else if (iter[s] == '.' && !dotSeen) {
            dotSeen = true;
        } else if (iter[s] == 'f' && s == iter.length() - 1 && digitSeen) {
            return true;
        } else {
            return false;
        }
        s++;
    }

    return false;
}

bool isDouble(std::string iter){
    int s = 0;
    if (iter[s] == '-' || iter[s] == '+')
        s++;

    bool dotSeen = false;
    bool digitSeen = false;

    while (s < (int)iter.length()) {
        if (isdigit(iter[s])) {
            digitSeen = true;
        } else if (iter[s] == '.' && !dotSeen) {
            dotSeen = true;
        } else {
            return false;
        }
        s++;
    }

    return digitSeen && dotSeen;
}

bool isSpecialLiteral(std::string iter) {
    if (iter == "nan" || iter == "+inf" || iter == "-inf" ||
        iter == "nanf" || iter == "+inff" || iter == "-inff") {
        return true;
    }
    return false;
}

void ScalarConverter::convert(const std::string &liter){
    if (liter.empty()){
        std::cout<< "String is empty" << std::endl;
        return;
    }

    if (liter == "nan" || liter == "+inf" || liter == "-inf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << liter << "f" << std::endl;
        std::cout << "double: " << liter << std::endl;
        return;
    }

    if (liter == "nanf" || liter == "+inff" || liter == "-inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << liter << std::endl;
        std::cout << "double: " << liter.substr(0, liter.length() - 1) << std::endl;  // Убираем 'f' для double
        return;
    }

    if (!isdigit(liter[0]) && isprint(liter[0]) && liter.length() == 1){
        charIs(liter);
        return;
    }

    if (isInt(liter)){
        intIs(liter);
        return;
    }

    if (isFloat(liter)){
        floatIs(liter);
        return;
    }

    if (isDouble(liter)){
        doubleIs(liter);
        return;
    }

    std::cout << "Unknown literal format" << std::endl;
}