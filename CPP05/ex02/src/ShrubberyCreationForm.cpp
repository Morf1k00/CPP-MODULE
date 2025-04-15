/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:54:35 by rostik            #+#    #+#             */
/*   Updated: 2025/04/14 13:08:40 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default ShrubberyCreationForm" , 137, 145), _target("Default ShrubberyForm"){
    std::cout << "Default ShrubberyCreationForm constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):AForm("ShruberryForm", 137, 145), _target(target){
    std::cout<< "ShrubberyCreationForm constructor called!" <<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):AForm(other), _target(other._target){
    std::cout << "ShrubberyCreationForm copy constructor!" <<std::endl;
    *this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor called!" << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
        this->_target = other._target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const{
    if (AForm::getIsSigned() == false )
        throw AForm::FormIsNotSigned();
    else if (executor.getGrade() > getGradeToExecute())
        throw ExecutionFailedException();
    else{
        std::ofstream newFile;
        newFile.open ((_target + "_shrubbery").c_str(), std::ios::trunc);
        newFile << "         @@@@@@@" << std::endl;
        newFile << "       @ @@@@@@@@@@@@" << std::endl;
        newFile << "    @@@@@@,,|| @@@@@@@" << std::endl;
        newFile << "         @@@@@@@" << std::endl;
        newFile << "         @@@@@@@" << std::endl;
        newFile << "         @@@@@@@" << std::endl;
        newFile << "        /|@@@@@@@8" << std::endl;
        newFile << "         @@@@@@@" << std::endl;
        newFile << "         @@@@@@@" << std::endl;
        newFile << "         @@@@@@@" << std::endl;
        newFile << "         @@@@@@@" << std::endl;
        newFile << "         @@@@@@@" << std::endl;
        newFile.close();
    }   
}

const char* ShrubberyCreationForm::ExecutionFailedException::what() const throw(){
    return("Form execution failed: grade too low to execute");
}
