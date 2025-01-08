/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:33:36 by rostik            #+#    #+#             */
/*   Updated: 2025/01/07 14:44:51 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){
    std::string a("HI THIS IS BRAIN");
    std::string* stringPTR = &a;
    std::string& stringREF = a;
    
    std::cout<< "Value of string "<< a << std::endl;
    std::cout<< "Value pointed to by stringPtr  " << *stringPTR <<std::endl;
    std::cout<< "Value pointed to by stringREF  " << stringREF << std::endl;
    
    std::cout<< "address of string " << &a << std::endl;
    std::cout<< "addres held by stringPTR " << stringPTR << std::endl;
    std::cout<< "address held by stringREF " << &stringREF << std::endl;

}