/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:54:30 by rostik            #+#    #+#             */
/*   Updated: 2025/04/14 12:50:38 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Default PresidentalPardonForm", 25, 5), _target("Default PresidentalPardonForm"){
    std::cout << "PresidendialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidendialPardonForm", 25, 5), _target(target){
    std::cout << "PresidendialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other), _target(other._target){
    std::cout << "PresidendialPardonForm copy constructor called" << std::endl;
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & other){
    std::cout << "PresidendialPardonForm assignment operator called" << std::endl;
    if (this != &other)
       this-> _target = other._target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidendialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &execute) const{
    if (AForm::getIsSigned() == false )
        throw AForm::FormIsNotSigned();
    else if (execute.getGrade() > getGradeToExecute())
        throw ExecutionFailedException();
    else
        std::cout << _target << "has pardoned!" << std::endl;

}

const char* PresidentialPardonForm::ExecutionFailedException::what() const throw(){
    return("Form execution failed");
}

class FormIsNotSigned : public std::exception
{
    public:
        const char *what() const throw();
};