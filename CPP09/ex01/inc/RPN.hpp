/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:42:36 by rostik            #+#    #+#             */
/*   Updated: 2025/04/24 12:19:26 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iomanip>
#include <map>
#include <vector>
#include <iostream>
#include <stack>
#include <fstream>
#include <exception>
#include <sstream>

class RPN{
    private:
        std::stack<int> _rpnStack;
    public:
        RPN();
        RPN(const RPN &copy);
        RPN &operator=(const RPN &copy);
        ~RPN();
        
    public:
        // bool isValid(int num);
        int count(int n1, int n2, char sym);
        // bool validString(std::string str);
        int trimString(const std::string &string);

};

class stringNotValid: public std::exception{
    const char *what() const throw ()
    {
        return ("String not valid: write like ./rpn [string with rpn number]");
    }
};

class InvalidExpression : public std::exception {
    public:
        const char *what() const throw() {
            return "Error: invalid expression";
        }
};


#endif