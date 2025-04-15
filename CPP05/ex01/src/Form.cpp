/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:53:00 by rostik            #+#    #+#             */
/*   Updated: 2025/04/08 13:07:44 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form():_name("Default"), _gradeToExecute(100), _gradeToSign(100){
    isSigned = false;
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name, int gradeToExecute, int gradeToSign ) : _name(name) ,_gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
    std::cout << "Form constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    isSigned = false;
}

Form::Form(const Form &other) : _name(other._name) ,_gradeToExecute(other._gradeToExecute), _gradeToSign(other._gradeToSign)
{
    std::cout << "Form copy constructor called" << std::endl;
    *this = other;
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Form assignment operator called" << std::endl;
    if (this != &other)
        isSigned = other.isSigned;
    return *this;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

const std::string &Form::getName() const
{
    return _name;
}
bool Form::getIsSigned() const
{
    return isSigned;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form& form)
{
    os << "Form name: " << form.getName() << ", is signed: " << (form.getIsSigned() ? "yes" : "no") 
       << ", grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute();
    return os;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form grade too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form grade too low!";
}