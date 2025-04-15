/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:49:17 by rostik            #+#    #+#             */
/*   Updated: 2025/04/14 12:48:57 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm():_name("Default"), _gradeToExecute(100), _gradeToSign(100){
    isSigned = false;
    std::cout << "Form default constructor called" << std::endl;
}

AForm::AForm(const std::string &name, int gradeToExecute, int gradeToSign): _name(name) ,_gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
    std::cout << "AForm constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    isSigned = false;
}

AForm::AForm(const AForm &other) : _name(other._name) ,_gradeToExecute(other._gradeToExecute), _gradeToSign(other._gradeToSign)
{
    std::cout << "AForm copy constructor called" << std::endl;
    *this = other;
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "AForm assignment operator called" << std::endl;
    if (this != &other)
        isSigned = other.isSigned;
    return *this;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

const std::string &AForm::getName() const
{
    return _name;
}
bool AForm::getIsSigned() const
{
    return isSigned;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const AForm& form)
{
    os << "AForm name: " << form.getName() << ", is signed: " << (form.getIsSigned() ? "yes" : "no") 
       << ", grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute();
    return os;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "AForm grade too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "AForm grade too low!";
}

const char *AForm::FormIsNotSigned::what() const throw()
{
    return "Form is not signed!";
}