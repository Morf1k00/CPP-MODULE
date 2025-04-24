/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:42:41 by rostik            #+#    #+#             */
/*   Updated: 2025/04/24 12:35:32 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

RPN::RPN(){

}

RPN::RPN(const RPN &copy){
    this->_rpnStack = copy._rpnStack;
}

RPN &RPN::operator=(const RPN &copy){
    if(this!= &copy)
        this->_rpnStack = copy._rpnStack;
    return(*this);
}

RPN::~RPN(){

}

int RPN::count(int a, int b, char sym){
    int res;
    switch (sym) {
        case '+': 
            res = a + b; 
            break;
        case '-': 
            res = a - b; break;
        case '*': 
            res = a * b; break;
        case '/':
            if (b == 0)
                throw std::runtime_error("Error: division by zero");
            res = a / b;
            break;
    }
    return res;
}

int RPN::trimString(const std::string &string){
    std::istringstream ss(string);
    std::string token;
    while (ss>>token){
        if (token == "(" || token == ")"){
            throw std::runtime_error("Error, wrong string");
        }
        if (isdigit(token[0])){
            _rpnStack.push(token[0] - '0');
        }
        else if (token.length() == 1 && std::string("+-*/").find(token) != std::string::npos){
            if (_rpnStack.size() < 2)
                throw std::runtime_error("Error, not enough variables");
            int b = _rpnStack.top();
            _rpnStack.pop();
            int a = _rpnStack.top();
            _rpnStack.pop();
            _rpnStack.push(count(a, b, token[0]));
        }
        else{
            throw std::runtime_error("Invalid token -> " + token);
        }

    }
    if (_rpnStack.size() != 1)
        throw InvalidExpression();
    return _rpnStack.top();
}