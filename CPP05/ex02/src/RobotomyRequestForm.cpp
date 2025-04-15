/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:54:32 by rostik            #+#    #+#             */
/*   Updated: 2025/04/14 12:50:41 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): AForm("Default RobotomyRequestForm", 45, 72), _target("Default RobotomyRequestForm"){
    std::cout<< "RobotomyRequestFrom default construcktor" <<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("RobotomyRequestFrom", 45,72), _target(target){
    std::cout << "RobotomyRequestForm construnctor called!"<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):AForm(other), _target(other._target){
    std::cout<< "RobotomyRequestForm copy constructor called!" << std::endl;
    *this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout <<"RobotomyRequestForm destructor called!" <<std::endl;
}

RobotomyRequestForm &RobotomyRequestForm:: operator=(const RobotomyRequestForm &other){
    if(this!= &other)
        this->_target = other._target;
    return *this;
}


void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
    if (AForm::getIsSigned() == false )
        throw AForm::FormIsNotSigned();
    else if (executor.getGrade() > getGradeToExecute())
        throw RobotomyFailedException();
    else{
        std::cout << "Noise..."<< std::endl;
        srand(time(NULL));
        if(rand() % 2){
            std::cout <<"Successfull" <<std::endl;
        }
        else
            std::cout << "Unfortunaly .." <<std::endl;
    }   
}

const char* RobotomyRequestForm::RobotomyFailedException::what() const throw(){
    return("Form execution failed");
}

class FormIsNotSigned : public std::exception
{
    public:
        const char *what() const throw();
};