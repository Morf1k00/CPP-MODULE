/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:16:04 by rostik            #+#    #+#             */
/*   Updated: 2025/01/06 14:32:37 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){
    std::string brain;
    brain = "HI THIS IS BRAIN";

    std::string* stringPTR = &brain;
    std::string& stringREF = brain;
    
    std:: cout << "Address of string: " << &brain << std::endl;
    std:: cout << "Address held by stringPTR: "<< stringPTR << std::endl;
    std:: cout << "Address held by stringREF: "<< &stringREF << std::endl;

    std::cout << "Value of string: " << brain << std::endl;
    std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF: " << stringREF << std::endl;

    return (0);
}