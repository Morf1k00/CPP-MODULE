/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:46:24 by rostik            #+#    #+#             */
/*   Updated: 2025/04/08 13:05:45 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iomanip>
#include <iostream> 
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        const std::string _name;
        const int _gradeToExecute;
        const int _gradeToSign;
        bool isSigned;

    public:
        Form();
        Form(const std::string &name, int gradeToSign, int gradeToExecute);
        Form(const Form &other);
        Form &operator=(const Form &other);
        ~Form();
        const std::string &getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat& bureaucrat);
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        }; 
};

std::ostream &operator<<(std::ostream &os, const Form& form);
#endif